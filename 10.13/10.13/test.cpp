#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	char arr[] = "abcd";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
int main() {
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{4,9,5,6} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			//printf("%d ", arr[i][j]);
			printf("&arr[%d][%d]=%p ", i,j,&arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}