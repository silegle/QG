#include"queue.h"
int main() {
	test();
	int a = 0;
	Queue q;
	printf("请输入入队的值\n");
	scanf_s("%d", &a);
	push(&q, a);
	return 0;
}