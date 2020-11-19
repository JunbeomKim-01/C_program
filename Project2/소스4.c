#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
FILE* fp = NULL;
void remove_flie();
void read_file(FILE* fp);
void open_file(FILE* fp);
void (*list[2])(FILE* fp) = { read_file,open_file };
int main() {
	list[1];

	return 0;
}
void open_file(FILE* fp) {
	fp = fopen(".\\test\\sample.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	fputc('b', fp);
	fclose(fp);
}
void remove_flie() {
	if (remove(".\\test\\sample.txt") == -1)
		printf("실패");
	else
	{
		printf("성공");
	}
}
void read_file(FILE *fp) {
	fp = fopen(".\\test\\sample.txt", "r");
	int c;

	while ((c = fgetc
	(fp)) != EOF)
		putchar(c);
	fclose(fp);
}