#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef struct node//压栈和出栈都在栈顶进行(这里的栈顶指前一段)
{
    char val;//数据
    struct node* next;//指针
}pnode;
typedef struct seqstack
{
    int size;//记录栈的大小
    pnode* top;//指向栈顶元素
}phead;

phead* initstack();//创建栈
int isempty(phead* istack);
pnode* seqstack_top(phead* istack);
pnode* seqstack_pop(phead* istack);
void seqstack_push(phead* istack, char x);
char buffer[256];//即对数组中每个数据都初始化为'\0'(\0的ascill码是0)
void char_put(char ch);
int priority(char ch);
int is_number(char ch);
int is_operator(char ch);
int is_left(char ch);
int is_right(char ch);
int transform(char str[]);

typedef struct node1//这里的栈是整型栈
{
    int val;//数据
    struct node1* next;//指针
}pnode1;
typedef struct seqstack1
{
    int size;//记录栈的大小
    pnode1* top;//指向栈顶元素
}phead1;
phead1* initstack1();
int isempty1(phead1* istack);
int seqstack_top1(phead1* istack);
int seqstack_pop1(phead1* istack);
void seqstack_push1(phead1* istack, int x);
int express(int left, int right, char op);
int getsize(phead1* stack);
int calculate(char str[]);