#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main() {
	int* p = (int*)malloc(sizeof(int) * 10);
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d\n", *(p + i)=i);
	}
	free(p);
	p = NULL;
	return 0;
}