#include"sort.h"
int main() {
	printf("1.查看不同大数据各排序函数用时\n2.查看小数据各排序函数用时\n3.按要求生成测试数据并排序\n请输入你的选择：");
	int op = 0;
	scanf_s("%d", &op);
	while (op) {
		switch (op) {
		case 1:
		{
			int* a1 = (int*)malloc(sizeof(int) * M);
			for (int i = 0; i < M; i++) {
				a1[i] = rand();
			}
			printf("M数据下用时\n");
			test1(a1, M);

			int* a2 = (int*)malloc(sizeof(int) * N);
			for (int i = 0; i < N; i++) {
				a2[i] = rand();
			}
			printf("N数据下用时\n");
			test1(a2, N);

			int* a3 = (int*)malloc(sizeof(int) * K);
			for (int i = 0; i < K; i++) {
				a3[i] = rand();
			}
			printf("K数据下用时\n");
			test1(a3, K);
		}
		break;
		case 2:
		{
			printf("小数据下用时\n");
			test2();

		}
		break;
		case 3:
		{
			printf("随机生成十个1-100的测试数据并排序输出\n");
			test3();
		}
		break;
		default:
			break;
		}
		//system("cls");
		printf("1.查看不同大数据各排序函数用时\n2.查看小数据各排序函数用时\n3.按要求生成测试数据并排序\n");
		scanf_s("%d", &op);
	}

	return 0;
}