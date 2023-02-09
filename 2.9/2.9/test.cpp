#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int a,int b) {
//	return a + b;
//}
/*int main() {
	int a = 10;
	int b = 20;
	int ret = 0;
	ret=Add(a, b);
	printf("%d\n", ret);
	printf("%p\n", &Add);
	printf("%p\n", Add);
	int (*p)(int, int) = Add;
	printf("%p\n", p);
	printf("%d\n", (*p)(10, 20));
	return 0;
}	*/	
int Add(int a, int b) {
	return a + b;
}
int Mult(int a, int b) {
	return a * b;
}
int main() {
	int a = 0;
	int b = 0;
	int ret = 0;
	int (*p[2])(int,int) = { Add,Mult };
	int i = 0;
	for (i = 0; i < 2; i++) {
		printf("%d\n", p[i](3, 2));
	}
}