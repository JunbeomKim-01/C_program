#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#define SIZE 5
FILE* fp = NULL;
typedef struct  Book{
	int num;
	char title[50];
}BOOK;

void remove_flie();
void read_file(FILE* fp);
void open_file(FILE* fp);
void write(FILE*p);
void dynamic();
void image();

void (*list[100])(FILE* fp) = { read_file, open_file, write ,image };

int main() {


	return 0;
}
void dynamic() {
	BOOK* p;
	p = (BOOK*)malloc(2 * sizeof(BOOK));
	if (p == NULL) {
		printf("�����Դϴ�.");
		return;
	}
	p[0].num = 1;
	strcpy(p[0].title , "Cprogram");
	p[1].num = 2;
	strcpy(p[1].title, "C#");
	free(p);
	return;

}
void image() {
	FILE* src_file, * dst_file;
	char filename[100];
	char buffer[1024];
	int r_count;

	printf("�̹��� �ҷ�����");
	scanf_s("%s", filename);

	src_file = fopen(filename, "rb");
	dst_file = fopen("conpy.jpg", "wb");
	if (src_file == NULL || dst_file == NULL) {
		fprintf(stderr, "���� ���� ����");
		return 1;
	}
	while ((r_count =fread(buffer,1,sizeof(buffer), src_file))>0)
	{
		int w_conut = fwrite(buffer, 1, r_count, dst_file);
		if (w_conut < 0) {
			fprintf(stderr, "���� ���� ����");
			return 1;
		}
		if (w_conut < r_count) {
			fprintf(stderr, "�̵�� ���� ����");
			return 1;
		}
	}
	printf("copy.jpg�� �̹��� ������ �����");
	fclose(src_file);
	fclose(dst_file);
	return 0;
}
void write(FILE* p) {

	int buffer[SIZE] = { 10,20,30,40,50 };
	fp = fopen("binary.bin", "wb");
	if (fp == NULL) {
		fprintf(stderr, "binary.bin������ ���� �� �����ϴ�.");
		return 1;
	}
	fwrite(buffer, sizeof(int), SIZE, fp);
	fclose(fp);
	return 0;
}
void open_file(FILE* fp) {
	fp = fopen(".\\test\\sample.txt", "w");
	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	fputc('b', fp);
	fclose(fp);
}
void remove_flie() {
	if (remove(".\\test\\sample.txt") == -1)
		printf("����");
	else
	{
		printf("����");
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