#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void menu() {
//	printf("***1.Add*********\n");
//	printf("***2.Sub*********\n");
//	printf("***3.Mul*********\n");
//	printf("***4.Div*********\n");
//	printf("*****0***********\n");
//}
//int Add(int a, int b) {
//	return a + b;
//}
//int Mul(int a, int b) {
//	return a * b;
//}
//int Sub(int a, int b) {
//	return a - b;
//}
//int Div(int a, int b) {
//	return a / b;
//}
//int main() {
////	char*(*pf)(char*,const char*)
////  char*(*pf[4])(char*,const char*) 
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	do {
//		menu();
//		printf("请选择您要进行的运算\n");
//		scanf("%d", &input);
//		if (input == 0) {
//			printf("退出\n");
//		}
//		else if(input>=0&&input<=4) {
//			printf("请选择您要运算的两个操作数\n");
//			scanf("%d%d", &a, &b);
//			int(*ptf[5])(int, int) = { 0,Add,Sub,Mul,Div };
//			int ret = ptf[input](a, b);
//			printf("%d\n", ret);
//		}
//		else {
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}