/*#include<stdio.h>
#include<stdlib.h>
int val[] = { 18,23,43,74,53 };
int compare(const void* a, const void* b) {
	return(*(int*)a - *(int*)b);
}
int main() {
	int n;
	qsort(val, 5, sizeof(int), compare);
	printf("정렬한 후 배열: ");
	for (n = 0; n < 5; n++)
		printf("%d ", val[n]);
	printf("\n");
	return(0);
}*/