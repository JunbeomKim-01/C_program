/*#include<stdio.h>

void menu();
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

void menu() {
	printf("\n===========\n");
	printf("0.����\n");
	printf("1.����\n");
	printf("2.����\n");
	printf("3.������\n");
	printf("4.����\n");
	printf("===========\n");
}
int main() {
	int choice, result, x, y;
	int (*pf[4])(int, int) = { add,sub,mul,div };

	while (1)
	{
		menu();
		printf("�޴��� �����Ͻÿ�\n");
		scanf_s("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		printf("�ΰ��� ������ �Է��Ͻÿ�\n");
		scanf_s("%d %d", &x, &y);

		result = pf[choice](x, y);
		printf("������=%d\n", result);
	}
}
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x
		- y;
}
int mul
(int x, int y)
{
	return x * y;
}
int div(int x, int y) {
	return x / y;
}*/