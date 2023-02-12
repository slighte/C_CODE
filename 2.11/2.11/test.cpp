#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int compare(const void*e1, const void*e2) {
	return *((int*)e1) - *((int*)e2);
}
void swap(char* buf1, char* buf2,int width) {
	int i = 0;
	for (i = 0; i < width; i++) {
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
//void qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*));
void buff(void* base, int sz, int width, int(*compare)(const void* e1, const void* e2)) {
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++) {
		for (j = 0; j < sz - 1 - i; j++) {
			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	buff(arr, sz, sizeof(arr[0]), compare);
	/*qsort(arr, sz, sizeof(arr[0]),compare);*/
	int i = 0;
	for (i = 0; i < 9; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
