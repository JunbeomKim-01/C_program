/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
typedef struct person {
	char name[SIZE];
	char address[SIZE];
	char mobile[SIZE];
	char desc[SIZE];
}PERSON;
PERSON get_record() {
	PERSON data;
	fflush(stdin);
	printf("�̸�\n"); gets_s(data.name);
	printf("�ּ�\n"); gets_s(data.address);
	printf("�޴���\n"); gets_s(data.mobile);
	printf("Ư¡\n"); gets_s(data.desc);
	return data;
}
void menu() {
	printf("=========\n");
	printf("1.�߰�\n2.���� \n3.�˻�\n4.����");
	printf("=========\n");
}
void print_record(PERSON data) {
	printf("�ּ�:%s\n", data.address); printf("Ư¡:%s\n", data.desc);
	printf("�޴���:%s\n", data.mobile); printf("�̸�: %s\n", data.name);
}
void add_record(FILE* fp) {

}
void search_record(FILE* fp) {

}
void updata_record(FILE* fp) {

}
int main() {
	FILE* fp = fopen("adress.dat", "a+");
	int select;
	if (fp=NULL) {
	}
	while (1)
	{

	}
	fclose(fp);
	return 0;
}*/