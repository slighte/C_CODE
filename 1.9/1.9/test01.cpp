#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void menu() {
//	printf("***************************\n");
//	printf("***************************\n");
//	printf("*******1.play**************\n");
//	printf("*******0.retreat***********\n");
//	printf("***************************\n");
//	printf("***************************\n");
//	printf("***************************\n");
//}
//void game() {
//	int num = 0;
//	int will = 0;
//	num = rand() % 100 + 1;
//	while (1) {
//		printf("%d", num);
//		printf("����������Ҫ���в²������\n");
//		scanf("%d", &will);
//		if (will > num) {
//			printf("�´���\n");
//		}
//		else if (will < num) {
//			printf("��С��\n");
//
//		}
//		else if(will==num) {
//			printf("��ϲ���¶���\n");
//			break;
//		}
//	}
//	return;
//}
//int main() {
//	int ret = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		scanf("%d", &ret);
//		switch (ret) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("���Ѿ��˳���Ϸ\n");
//			break;
//		default:
//			printf("��������\n");
//			break;	
//		}
//	} while (ret);
//	return 0;	
//}
//int main() {
//	goto again;
//	printf("hello\n");
//	
//	
//again:
//	printf("���");
//	return 0;  