#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	//char* p = "abcdef";
//	//printf("%c\n", *p);
//	char arr[20] = "abcdeef";
//	char* p = arr;
//	printf("%c", *p);
//	return 0;
//}
//int main() {
//	char arr[20] = "abcdef";
//	char* p = arr;
//	*p = 'w';
//	printf("%s", p);
//	return 0;
//}
int main() {
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 5,7,8,9,2 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}

	return 0;
}
