#pragma once
#include<stdio.h>
#include<assert.h>
#define Maxsize 7


typedef struct Queue {

	int data[Maxsize];//保存数据的数组
	int front;//保存队头元素下标的队头指针
	int rear;//保存队尾元素下标的队尾指针
}Queue;

//初始化队列，初始化队头指针和队尾指针
void initQueue(Queue* q);
//判断队空
int isempty(Queue* q);
//判断队满
int isfull(Queue* q);
//元素入队
void push(Queue* q, int val);
//元素出队
int pop(Queue* q);
//获取队头元素
int getFront(Queue* q);
//获取队尾元素
int getRear(Queue* q);
void test();