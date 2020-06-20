#include "define.h"

int isGlbVar(char *alias)//判断alias是否是全局变量
{
  for(int i=0;symbolTable.symbols[i].flag=='Q';i++)
  {
    if(!strcmp(alias,symbolTable.symbols[i].alias))
      return 1;
  }
  return 0;
}
//这段代码结合实验教材，采用朴素寄存器分配,完成将中间代码转换成MISPS代码，并输出MIPS代码文件
void objectCode(struct codenode *head)
{
  if(head == NULL)
  {
    printf("no objectCode\n");
    return ;
  }
  struct codenode *h = head, *p;
  int i, j, index, type;
  /*printf(".data\n");
  printf(".globl main\n");
  printf(".text\n");*/
  do{
    switch(h->op)
    {
      case ASSIGNOP:
		  if (h->opn1.kind == INT) 
      {
			  printf("  li $t3, %d\n", h->opn1.const_int);

		  }
		  else
		  {
        if(isGlbVar(h->opn1.id))
        {
          printf("  lw $t1, %d($t6)\n", h->opn1.offset);
          //printf("*************************%s %d\n",h->opn1.id,h->opn1.offset);
        }
        else
        {
          printf("  lw $t1, %d($sp)\n", h->opn1.offset);
        }
			  printf("  move $t3, $t1\n");
		  }
      if(isGlbVar(h->result.id))
        {
          printf("  sw $t3, %d($t6)\n", h->result.offset);

        }
        else
        {
          printf("  sw $t3, %d($sp)\n", h->result.offset);
        }
		  //printf("  sw $t3, %d($sp)\n", h->result.offset);
        break;
      case PLUS:
      case MINUS:
      case STAR:
      case DIV:
        //printf("  lw $t1, %d($sp)\n", h->opn1.offset);
        if(isGlbVar(h->opn1.id))
        {

          printf("  lw $t1, %d($t6)\n", h->opn1.offset);

        }
        else
        {
          printf("  lw $t1, %d($sp)\n", h->opn1.offset);
        }
        //printf("  lw $t2, %d($sp)\n", h->opn2.offset);
        if(isGlbVar(h->opn2.id))
        {
          printf("  lw $t2, %d($t6)\n", h->opn2.offset);

        }
        else
        {
          printf("  lw $t2, %d($sp)\n", h->opn2.offset);
        }
        if(h->op == PLUS)
          printf("  add $t3,$t1,$t2\n");
        else if(h->op == MINUS)
          printf("  sub $t3,$t1,$t2\n");
        else if(h->op == STAR)
          printf("  mul $t3,$t1,$t2\n");
        else if(h->op == DIV)
        {
          printf("  div $t1, $t2\n");
          printf("  mflo $t3\n");
        }
        //printf("  sw $t3, %d($sp)\n", h->result.offset);
        
        if(isGlbVar(h->result.id))
        {
          printf("  sw $t3, %d($t6)\n", h->result.offset);

        }
        else
        {
          printf("  sw $t3, %d($sp)\n", h->result.offset);
        }
        break;
      case FUNCTION:
        printf("\n%s:\n", h->result.id);
        if(!strcmp(h->result.id,"main")) //特殊处理main
        {
          for(i=0;symbolTable.symbols[i].flag=='Q';i++);
          //printf("****************%d\n",i);
          printf("  addi $sp, $sp, -%d\n",i*4);
          i=0;
          printf("move $t6, $sp\n");//t6存最初始的sp值
          printf("  addi $sp, $sp, -%d\n",symbolTable.symbols[h->result.offset].offset);
        }
        break;
      case PARAM: //直接跳到后面一条
        break;
      case LABEL:
        printf("%s:\n", h->result.id);
        break;
      case GOTO:
        printf("  j %s\n", h->result.id);
        break;
      case JLE:
      case JLT:
      case JGE:
      case JGT:
      case EQ:
      case NEQ:
        //printf("  lw $t1, %d($sp)\n", h->opn1.offset);
        if(isGlbVar(h->opn1.id))
        {
          printf("  lw $t1, %d($t6)\n", h->opn1.offset);

        }
        else
        {
          printf("  lw $t1, %d($sp)\n", h->opn1.offset);
        }
        //printf("  lw $t2, %d($sp)\n", h->opn2.offset);
        if(isGlbVar(h->opn2.id))
        {
          printf("  lw $t2, %d($t6)\n", h->opn2.offset);

        }
        else
        {
          printf("  lw $t2, %d($sp)\n", h->opn2.offset);
        }
        if(h->op == JLE)
          printf("  ble $t1,$t2,%s\n", h->result.id);
        else if(h->op == JLT)
          printf("  blt $t1,$t2,%s\n", h->result.id);
        else if(h->op == JGE)
          printf("  bge $t1,$t2,%s\n", h->result.id);
        else if(h->op == JGT)
          printf("  bgt $t1,$t2,%s\n", h->result.id);
        else if(h->op == EQ)
          printf("  beq $t1,$t2,%s\n", h->result.id);
        else
          printf("  bne $t1,$t2,%s\n", h->result.id);
        break;
      case ARG:   //直接跳到后面一条,回头反查
        break;
      case CALL:
        for(p = h, i = 0; i < symbolTable.symbols[h->opn1.offset].paramnum; i++)  //定位到第一个实参的结点
                p = p->prior;
        //symbolTable.symbols[h->opn1.offset].offset
       
        //开活动记录空间
        printf("  move $t0,$sp\n"); //保存当前函数的sp到$t0中，为了取实参表达式的值
        printf("  addi $sp, $sp, -%d\n", symbolTable.symbols[h->opn1.offset].offset);
        printf("  sw $ra,0($sp)\n"); //保留返回地址
        i = h->opn1.offset + 1;  //第一个形参变量在符号表的位置序号

        while(symbolTable.symbols[i].flag == 'P')
        {
          
          //printf("  lw $t1, %d($t0)\n", p->result.offset); //取实参值
          if(isGlbVar(p->result.id))
          {
            printf("  lw $t1, %d($t6)\n", p->result.offset);
          }
          else
          {
            printf("  lw $t1, %d($t0)\n", p->result.offset);
          }
        //printf("*************************%s %d\n",p->result.id,p->result.offset);
          printf("  move $t3,$t1\n");
          printf("  sw $t3,%d($sp)\n", symbolTable.symbols[i].offset); //送到被调用函数的形参单元
          p = p->next;
          i++;
        }
        printf("  jal %s\n", h->opn1.id); //恢复返回地址
        printf("  lw $ra,0($sp)\n"); //恢复返回地址
        printf("  addi $sp,$sp,%d\n", symbolTable.symbols[h->opn1.offset].offset); //释放活动记录空间
        
        printf("  sw $v0,%d($sp)\n", h->result.offset); //取返回值

        break;
      case RETURN:
        //printf("  lw $v0,%d($sp)\n", h->result.offset); //返回值送到$v0
        if(isGlbVar(h->result.id))
        {
          printf("  lw $v0, %d($t6)\n", h->result.offset);
          //printf("*************************%s\n",h->result.id);
        }
        else
        {
          printf("  lw $v0, %d($sp)\n", h->result.offset);
        }
        printf("  jr $ra\n");
        break;
    }
  h = h->next;
  }while(h != head);
}