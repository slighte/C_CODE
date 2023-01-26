#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble(int arr[],int n) {
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < n - 1; i++) {
		int flag = 1;
		for (j = 0; j < n - i - 1; j++) {	
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1) {
			break;
		}
	}
}
int main() {
	int i = 0;
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz);
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}