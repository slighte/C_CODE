#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int strlen(char* ptr) {
//	if (*ptr != '\0') {
//		return 1 + strlen(ptr+1);
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	char arr[20] = "bit";
//	int ret = 0;
//	ret=strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//ì³²¨ÄÇÆõÊıÁĞ
//int fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int fib(int n) {
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main() {
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//	return 0;
//} 
