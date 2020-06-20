#include "define.h"

int isGlbVar(char *alias)  //�ж�alias�Ƿ���ȫ�ֱ���
{
  for (int i = 0; symbolTable.symbols[i].flag == 'Q'; i++) {
    if (!strcmp(alias, symbolTable.symbols[i].alias)) return 1;
  }
  return 0;
}
//��δ�����ʵ��̲ģ��������ؼĴ�������,��ɽ��м����ת����MISPS���룬�����MIPS�����ļ�
void objectCode(struct codenode *head) {
  if (head == NULL) {
    printf("no objectCode\n");
    return;
  }
  struct codenode *h = head, *p;
  int i, j, index, type;
  /*printf(".data\n");
  printf(".globl main\n");
  printf(".text\n");*/
  do {
    switch (h->op) {
      // assume only int data
      case ASSIGNOP:
        if (h->opn1.kind == INT) {
          //ֱ�Ӹ�ֵ
          printf("  li $t3, %d\n", h->opn1.const_int);

        } 
        else {
          if (isGlbVar(h->opn1.id)) {
            //ȫ�ֱ�������ȫ�ֿռ�ȡoffset
            printf("  lw $t1, %d($t6)\n", h->opn1.offset);
            // printf("*************************%s
            // %d\n",h->opn1.id,h->opn1.offset);
          } else {
            //�ֲ���������ջ��ȡoffset
            printf("  lw $t1, %d($sp)\n", h->opn1.offset);
          }
          //��������
          printf("  move $t3, $t1\n");
        }
        //������
        if (isGlbVar(h->result.id)) {
          printf("  sw $t3, %d($t6)\n", h->result.offset);
        } else {
          printf("  sw $t3, %d($sp)\n", h->result.offset);
        }
        // printf("  sw $t3, %d($sp)\n", h->result.offset);
        break;

      //����������DIVͳһ����
      case PLUS:
      case MINUS:
      case STAR:
      case DIV:
        // printf("  lw $t1, %d($sp)\n", h->opn1.offset);
        if (isGlbVar(h->opn1.id)) {
          printf("  lw $t1, %d($t6)\n", h->opn1.offset);

        } else {
          printf("  lw $t1, %d($sp)\n", h->opn1.offset);
        }
        // printf("  lw $t2, %d($sp)\n", h->opn2.offset);
        if (isGlbVar(h->opn2.id)) {
          printf("  lw $t2, %d($t6)\n", h->opn2.offset);

        } else {
          printf("  lw $t2, %d($sp)\n", h->opn2.offset);
        }
        if (h->op == PLUS)
          printf("  add $t3,$t1,$t2\n");
        else if (h->op == MINUS)
          printf("  sub $t3,$t1,$t2\n");
        else if (h->op == STAR)
          printf("  mul $t3,$t1,$t2\n");
        else if (h->op == DIV) {
          printf("  div $t1, $t2\n");
          printf("  mflo $t3\n");
        }
        if (isGlbVar(h->result.id)) {
          printf("  sw $t3, %d($t6)\n", h->result.offset);
        } else {
          printf("  sw $t3, %d($sp)\n", h->result.offset);
        }
        break;
      case FUNCTION:
        printf("\n%s:\n", h->result.id);
        if (!strcmp(h->result.id, "main"))  //���⴦��main
        {
          for (i = 0; symbolTable.symbols[i].flag == 'Q'; i++);
          printf("  addi $sp, $sp, -%d\n", i * 4);
          i = 0;
          printf("  move $t6, $sp\n");  // t6�����ʼ��spֵ
          printf("  addi $sp, $sp, -%d\n",symbolTable.symbols[h->result.offset].offset);
        }
        break;
      case PARAM:  //ֱ����������һ��
        break;
      case LABEL:
        printf("%s:\n", h->result.id);
        break;
      case GOTO:
        printf("  j %s\n", h->result.id);
        break;

      //��NEQͳһ����
      case JLE:
      case JLT:
      case JGE:
      case JGT:
      case EQ:
      case NEQ:
        if (isGlbVar(h->opn1.id)) {
          printf("  lw $t1, %d($t6)\n", h->opn1.offset);
        } else {
          printf("  lw $t1, %d($sp)\n", h->opn1.offset);
        }

        if (isGlbVar(h->opn2.id)) {
          printf("  lw $t2, %d($t6)\n", h->opn2.offset);
        } else {
          printf("  lw $t2, %d($sp)\n", h->opn2.offset);
        }
        if (h->op == JLE)
          printf("  ble $t1,$t2,%s\n", h->result.id);
        else if (h->op == JLT)
          printf("  blt $t1,$t2,%s\n", h->result.id);
        else if (h->op == JGE)
          printf("  bge $t1,$t2,%s\n", h->result.id);
        else if (h->op == JGT)
          printf("  bgt $t1,$t2,%s\n", h->result.id);
        else if (h->op == EQ)
          printf("  beq $t1,$t2,%s\n", h->result.id);
        else //NEQ
          printf("  bne $t1,$t2,%s\n", h->result.id);
        break;
      case ARG:  //ֱ����������һ��,��ͷ����
        break;
      case CALL:
        //��ǰѭ����λ����һ��ʵ�εĽ��
        for (p = h, i = 0; i < symbolTable.symbols[h->opn1.offset].paramnum;i++)
          p = p->prior;
        // symbolTable.symbols[h->opn1.offset].offset

        //�����¼�ռ�
        printf("  move $t0,$sp\n");  //���浱ǰ������sp��$t0�У�Ϊ��ȡʵ�α��ʽ��ֵ
        printf("  addi $sp, $sp, -%d\n", symbolTable.symbols[h->opn1.offset].offset);
        printf("  sw $ra,0($sp)\n");  //�������ص�ַ
        i = h->opn1.offset + 1;  //��һ���βα����ڷ��ű��λ�����

        //ȡ��ʵ�ξ���ֵ
        while (symbolTable.symbols[i].flag == 'P') {
          if (isGlbVar(p->result.id)) {
            printf("  lw $t1, %d($t6)\n", p->result.offset);
          } else {
            printf("  lw $t1, %d($t0)\n", p->result.offset);
          }
          printf("  move $t3,$t1\n");
          //�浽�����ú������βε�Ԫ
          printf("  sw $t3,%d($sp)\n",symbolTable.symbols[i].offset);
          p = p->next;
          i++;
        }
        printf("  jal %s\n", h->opn1.id);  //�ָ����ص�ַ
        printf("  lw $ra,0($sp)\n");       //�ָ����ص�ַ
        //�ͷŻ��¼�ռ�
        printf("  addi $sp,$sp,%d\n",symbolTable.symbols[h->opn1.offset].offset);
        printf("  sw $v0,%d($sp)\n", h->result.offset);  //ȡ����ֵ

        break;
      case RETURN:
        if (isGlbVar(h->result.id)) {
          printf("  move $v0, %d($t6)\n", h->result.offset);
        } else {
          printf("  move $v0, %d($sp)\n", h->result.offset);
        }
        printf("  jr $ra\n");
        break;
    }
    h = h->next;
  } while (h != head);
}