#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int age = 0;
//	printf("请输入您要输入的内容:");
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		
//	if (age >= 18 && age < 30)
//	printf("青年\n");
//	else if (age >= 30 && age < 50)
//	printf("壮年\n"); 
//	else if (age >= 50 && age < 70)
//	printf("暮年\n");
//
//	else
//	printf("老年\n");
//	}
//
//
//
//
//
//
//	return 0;
//} 
//int main() {
//	int a = 0;
//	int b = 1;
//	if (a == 2)
//		if (b == 1)
//			printf("hehe\n");
//		else
//			printf("hah\n");
//
//
//	return 0;
//}
//int main() {
//	int i = 0;
//	printf("请输入您想要判断的数:");
//	scanf("%d", &i);
//	if (i % 2 == 1)
//		printf("该数为奇数");
//	else
//		printf("该数不是奇数");
//	return 0;
//}
//int main() {
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 1) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d\n", i);
//			
//		}
//		i++;
//	}
//	return 0;
//}
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		printf("%d ", i);
//		i += 2;
//	}
//
//
//	return 0;
//}
//int main() {
//	int i = 0;
//	printf("请输入您感兴趣的频道:");
//	scanf("%d", &i);
//	switch (i)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//		printf("赛车频道");
//		break;
//	case 5:
//		printf("文学频道");
//		break;
//
//	default:
//		printf("您的输入有误");
//		break;
//	}
//	return 0;
//}
//int main() {
//	int i = 0;
//	while (0) {
//		printf("hehe\n");
//	}
//
//
//
//
//
//	return 0;
//}
//int main() {
//	int i = 0;
//	while (i <= 10) {
//		printf("%d ", i);
//		i++;
//		if (i == 5)
//			continue;
//		printf("5 not");
//	}
//
//
//	return 0;
//}
//int main() {
//	int cha = getchar();
//	putchar(cha);
//	printf("%c\n", cha);
//	return 0;
//}
int main() {
	int cha = 0;
	while ((cha=getchar()) != EOF) {
		putchar(cha);
	}




	return 0;
}