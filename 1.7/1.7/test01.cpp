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
//��ϰһ
//int main() {
//	int i = 0;
//	int sum = 1;
//	printf("��������Ҫ�����:");
//	scanf("%d", &i);
//	while (i > 1) {
//		sum = sum * i;
//		i--;
//	}
//	printf("�����Ľ׳�Ϊ:%d", sum);
//	return 0;
//}
//��������
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
//��ϰ��
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
//			printf("�±���:%d\n", i);
//			break;
//		}
//		else if (i == sz-1) {
//			printf("�����ݲ�������;");
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
//			printf("�ҵ���\n");
//			break;
//		}
//	}
//	printf("δ�ҵ�");
//	return 0;
//}
//int main() {
//	char arr[] = "welcome to bit";
//	char arr1[]= "###################";
//	int m = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]))-2;
//	int sy = (sizeof(arr1) / sizeof(arr1[0]))-2;
//	while (m <= sz) {
//		arr1[m] = arr[m];//strlenҲ������;
//		arr1[sy] = arr[sz];
//		printf("%s\n",arr1);
//		Sleep(1000);
//		system("cls");//�����Ļ;
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
//		printf("��������������:");
//		scanf("%s", &code);
//		if (strcmp(code,"1356")==0) {
//			printf("������ȷ");
//			break;
//		}
//		else {
//			printf("�������������\n");
//		}
//	}
//	return 0;
//}















