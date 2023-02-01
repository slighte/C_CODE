#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void init(int* ptr,int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		*ptr++ = 0;
//	}
// }
//void print(int arr[],int sz) {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////void Reverse(int arr[],int sz) {
////	int i = 0;
////	for (i = sz-1; i >= 0; i--) {
////		printf("%d ", arr[i]);
////	}
////}
//void Reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//	while (left <right) {
//		temp=arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	//print(arr,sz);
//	Reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//void swap(int arr[], int arr1[],int sz) {
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++) {
//		temp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = temp;
//	}
//}
//int main() {
//	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = { 5,5,6,8,9,7,2,9,14,7 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	 swap(arr1, arr2,sz);
//	 for (i = 0; i < 10; i++) {
//		 printf("%d ", arr1[i]);
//	}
//	return 0;
//}
