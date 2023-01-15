#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void swap(int* pa, int* pb) {
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//#include<math.h>
//   int is_num(int n) {
//	int j = 0;
//	for (j = 2; j <= n-1; j++) {
//		if (n % j == 0) {
//			return 0;
//		}
//	}
//	if (j == n) {
//		return 1;
//	}
//}
//int main() {
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		if (is_num(i) == 1) {
//			printf("%d\n", i);
//		}
//		else if (is_num(i) == 0) {
//			
//		}
//	}
//	return 0;
//int is_run(int i) {
//	if (i % 4 == 0 && i % 100 != 0) {
//		return 1;
//	}
//	else if (i % 400 == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	int i = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if (is_run(i) == 1) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
int is_find(int arr[],int i,int sz) {
	int left = 0;
	int right = sz - 1;
	while(left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < i) {
			left = mid + 1;
		}
		else if (arr[mid] > i) {
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	if (left > right) {
		return 1;
	}
}
int main() {
	int sz = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	 sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int ret = 0;
	printf("请输入您想要查找的数字:");
	scanf("%d", &i);
	ret=is_find(arr, i,sz);
	if (ret == 1) {
		printf("无法查找到该数字");
	}
	else {
		printf("%d\n", ret);
	}
	
	return 0;
}
