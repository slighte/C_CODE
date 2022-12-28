#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {


	//printf("hehe\n");
	//char one = 'A';
	//printf("%c\n", one); 
	/*printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(char));*/
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	scanf("%d %d", &sum1, &sum2);
	sum = sum1 + sum2;
	printf("%d", sum);
	
	

	return 0;
}