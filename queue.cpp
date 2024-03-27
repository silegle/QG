#include"queue.h"


//初始化队列，初始化队头指针和队尾指针
void initQueue(Queue* q) {
	q->front = 0;
	q->rear = 0;

}

//判断队空
int isempty(Queue* q) {
	return(q->front == q->rear);
}
//判断队满
int isfull(Queue* q) {
	return (q->rear + 1) % Maxsize == q->front;
}
//元素入队
void push(Queue* q, int val) {
	//如果队满，不能入队
	if (isfull(q)) {
		printf("队满，无法入队\n");
		return;
	}
	q->rear = (q->rear + 1) % Maxsize;
	q->data[q->rear] = val;

}
//元素出队
int pop(Queue* q) {
	if (isempty(q)) {
		printf("队空，无法出队\n");
		return -1;
	}
	q->front = (q->front + 1) % Maxsize;
	int temp = q->data[q->front];
	return temp;
}

//获取队头元素
int getFront(Queue* q) {
	if (isempty(q)) {
		printf("队空");
		return -1;
	}
	int temp = q->front + 1;
	return q->data[temp];
}
//获取队尾元素
int getRear(Queue* q) {
	if (isempty(q)) {
		printf("队空");
		return -1;
	}
	return q->data[q->rear];
}
void test() {
	Queue q;
	initQueue(&q);
	push(&q, 7);
	push(&q, 9);
	push(&q, 2);
	push(&q, 4);
	printf("%d\n", pop(&q));
	printf("%d\n", pop(&q));
	push(&q, 89);
	printf("%d\n", pop(&q));
	printf("%d\n", pop(&q));
	printf("%d\n", pop(&q));
	printf("%d\n", pop(&q));
	printf("%d\n", pop(&q));
}
