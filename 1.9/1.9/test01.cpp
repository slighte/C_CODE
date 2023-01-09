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
//		printf("请输入您想要进行猜测的数字\n");
//		scanf("%d", &will);
//		if (will > num) {
//			printf("猜大了\n");
//		}
//		else if (will < num) {
//			printf("猜小了\n");
//
//		}
//		else if(will==num) {
//			printf("恭喜您猜对了\n");
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
//			printf("您已经退出游戏\n");
//			break;
//		default:
//			printf("输入有误\n");
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
//	printf("你好");
//	return 0;  