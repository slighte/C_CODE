#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = &arr[9];
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *p);
//		p--;
//	}
//
//	return 0;
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int* p1 = &arr[9];
//	printf("%d\n", p1 - p);
//	return 0;
//}
//int mystrlen(char*str) {
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//int main() {
//	char arr[10] = "bit";
//	int ret = 0;
//	ret=mystrlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9,};
//	int* i = &arr[10];
//	int j = 0;
//	for (i; i > &arr[0];) {
//		*--i = 0;
//	}
//	for (j = 0; j < 10; j++) {
//		printf("%d\n", arr[j]);
//	}
//	
//	return 0;
//}
//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}
//int main() {
//	int a = 30;
//	int* p = &a;
//	int** pm = &p;
//	printf("%d", **pm);
//	return 0;
//}
//指针数组的应用;
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}
