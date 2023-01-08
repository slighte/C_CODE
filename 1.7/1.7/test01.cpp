#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
//int main() {
//	int i = 0;
//	int k = 0;
//	for(k=0;k<=10;k++){
//		k++;	
//	}	
//	return 0;
//}
//int main() {
//	int i = 0;
//	do {
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//练习一
//int main() {
//	int i = 0;
//	int sum = 1;
//	printf("请输入您要求的数:");
//	scanf("%d", &i);
//	while (i > 1) {
//		sum = sum * i;
//		i--;
//	}
//	printf("该数的阶乘为:%d", sum);
//	return 0;
//}
//方法二：
//int main() {
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d",&i);
//	for (n = 1; n <=i;n++) {
//		sum = sum * n;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//练习二
//int main() {
//	int i = 0;
//	int n = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (j = 1; j <= 4; j++) {
//		for (i = 1; i <= j; i++) {
//			ret = ret * i;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <=sz-1; i++) {
//		 if(arr[i]==15) {
//			printf("%d\n", arr[i]);
//			printf("下标是:%d\n", i);
//			break;
//		}
//		else if (i == sz-1) {
//			printf("该数据并不存在;");
//		}
//	}
//	return 0;
//}
// 
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int mid = 4;
//	int low = 0;
//	int high = 9;
//	while (low<=high) {
//		if (arr[mid] > 11) {
//			high=mid-1;
//			mid = (high + low) / 2;
//		}
//		else if (arr[mid] < 11) {
//			low = mid + 1;
//			mid = (high + low) / 2;
//		}
//		else if (arr[mid] == 11) {
//			printf("找到了\n");
//			break;
//		}
//	}
//	printf("未找到");
//	return 0;
//}
//int main() {
//	char arr[] = "welcome to bit";
//	char arr1[]= "###################";
//	int m = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]))-2;
//	int sy = (sizeof(arr1) / sizeof(arr1[0]))-2;
//	while (m <= sz) {
//		arr1[m] = arr[m];//strlen也可以用;
//		arr1[sy] = arr[sz];
//		printf("%s\n",arr1);
//		Sleep(1000);
//		system("cls");//清空屏幕;
//		m++; 
//		sy--;
//		sz--;
//	}
//	return 0;
//}
//int main() {
//	char code[20] = "0";//
//	int i = 1;
//	for (i = 1; i <= 3; i++) {
//		printf("请输入您的密码:");
//		scanf("%s", &code);
//		if (strcmp(code,"1356")==0) {
//			printf("输入正确");
//			break;
//		}
//		else {
//			printf("输入错误，请重试\n");
//		}
//	}
//	return 0;
//}















