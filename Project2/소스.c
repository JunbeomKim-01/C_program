/*#include<stdio.h>

void menu();
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

void menu() {
	printf("\n===========\n");
	printf("0.µ¡¼À\n");
	printf("1.»¬¼À\n");
	printf("2.°ö¼À\n");
	printf("3.³ª´°¼À\n");
	printf("4.Á¾·á\n");
	printf("===========\n");
}
int main() {
	int choice, result, x, y;
	int (*pf[4])(int, int) = { add,sub,mul,div };

	while (1)
	{
		menu();
		printf("¸Þ´º¸¦ ¼±ÅÃÇÏ½Ã¿À\n");
		scanf_s("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		printf("µÎ°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À\n");
		scanf_s("%d %d", &x, &y);

		result = pf[choice](x, y);
		printf("¿¬»ê°á°ú=%d\n", result);
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