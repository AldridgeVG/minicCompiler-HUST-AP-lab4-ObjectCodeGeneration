#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "parser.tab.h"

#define DX 3*sizeof(int)          //���¼������Ϣ��Ҫ�ĵ�Ԫ�����������ʵ��ϵͳ����

#define MAXLENGTH   1000    //������ű�Ĵ�С
//�������൱���з��ս�� �� �ս��(.l�ļ��ʷ�����Return�Ķ���)
enum node_kind{_BREAK,_CONTINUE,EXT_DEF_LIST,EXT_DEF_VAR,EXT_DEF_FUNC,EXT_VARDEC_LIST,FUNC_DEC,FUNC_PARAM_LIST,FUNC_PARAM_DEC,COMP_STM,COMPSTM_LIST,COMPSTM_EXP,IF_THEN,IF_THEN_ELSE,DEF_LIST,VAR_DEF,VARDEC_LIST,FUNC_CALL,ARRAY_CALL,ARGS,FOR_CONDITION,EXP_FOR1_LIST,EXP_FOR3_LIST};

struct node{
    enum node_kind nodeKind;    //�������
    union{
        int type_int;
	    float type_float;
        char type_char;
	    char type_id[32];
    };
    struct node *ptr[3];   
    struct node *parent;//���ڵ�   
    int pos;        //��¼�﷨��λ���ڵ�λ���к�
    int size;         //��¼����Ĵ�С
    int index;      //��¼������±�
    char scope[50]; //����������
    char Etrue[15],Efalse[15];       //�Բ������ʽ�ķ���ʱ�����ת��Ŀ��ı��
    char Snext[15];               //����Ӧ���Sִ�к����һ�����λ�ñ��
    struct codenode *code;          //�ý���м��������ͷָ��
    int level;      //���
    int place;      //����Ӧ�ı���/���������ű��λ�����
    int type;       //����Ӧ��ֵ������
    int num;        //��¼�ӽ������������Լ���
    int offset;     //ƫ����
    int width;       //ռ�����ֽ���
    int return_num;
    int break_num;
    int canJump;
};

struct opn{
    int kind;                  //��ʶ����������
    int type;                  //��ʶ������������
    union {
        int     const_int;      //������ֵ��������
        float   const_float;    //���㳣��ֵ��������
        char    const_char;    //�ַ�����ֵ��������
        char    id[33];        //��������ʱ�����ı��������ַ���
        };
    int level;                 //�����Ĳ�ţ�0��ʾ��ȫ�ֱ��������ݱ����ھ�̬������
    int offset;                 //������Ԫƫ�����������ڷ��ű�Ķ���λ����ţ�Ŀ���������ʱ��
};

//����ַTAC������,���õ��������м����Դ���
struct codenode {   
        int  op;
        struct opn opn1,opn2,result;
        struct codenode  *next,*prior;
    };

//���ű����
struct symbol{  
    char name[33];     //����������
    int level;              //��ţ��ⲿ���������������Ϊ0���β���Ϊ1��ÿ��1����������ż�1���˳���1
    int type;           //�������� �� ��������ֵ����
    int  paramnum;    //�βθ���     
    char alias[10];      //������Ϊ���Ƕ�ײ��ʹ�ã�ʹ��ÿһ����������Ψһ
    char flag;          //���ű�ǣ����飺��A'  ������'F'  ������'V'   ������'P'  ��ʱ������'T'
    int offset;      //�ⲿ�����;ֲ��������侲̬����������¼�е�ƫ������
//���¼�������¼��С��Ŀ���������ʱʹ��
};

//���ű�˳��ջ����index��ֵΪ0
struct symboltable{
    struct symbol symbols[MAXLENGTH];
    int index;
} symbolTable;


struct symbol_scope_begin {  
    int TX[30];
    int top;
} symbol_scope_TX;

char *bNext;
char* cNext;

struct node *mknode(int kind,struct node *first,struct node *second, struct node *third,int pos );
char *strcats(char *s1,char *s2);
char *createAlias();
char *createTemp();
void semantic_error(int line,char *msg1,char *msg2);
void prn_symbol();
int searchSymbolTable(char *name);
int fillSymbolTable(char *name,char *alias,int level,int type,char flag,int offset);
int fill_Temp(char *name,int level,int type,char flag,int offset);
void ext_var_list(struct node *T); //δ��
int  match_param(int i,struct node *T);
void objectCode(struct codenode *head);
void semantic_Analysis(struct node *T);//δ��
void Exp(struct node *T);
void boolExp(struct node *T);
void semantic_Analysis0(struct node *T);