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
	printf("이름\n"); gets_s(data.name);
	printf("주소\n"); gets_s(data.address);
	printf("휴대폰\n"); gets_s(data.mobile);
	printf("특징\n"); gets_s(data.desc);
	return data;
}
void menu() {
	printf("=========\n");
	printf("1.추가\n2.수정 \n3.검색\n4.종료");
	printf("=========\n");
}
void print_record(PERSON data) {
	printf("주소:%s\n", data.address); printf("특징:%s\n", data.desc);
	printf("휴대폰:%s\n", data.mobile); printf("이름: %s\n", data.name);
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