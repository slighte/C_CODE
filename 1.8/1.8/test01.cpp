#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main() {
//	printf("您输入您想要进行排序的三个数");
//	int a, b, c = 0;
//	int temp = 0;
//	int ret = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b) {
//		temp = a;
//		a = b;
//		b = temp;
//   }
//	else if (a < c) {
//		temp = c;
//		c = a;
//		a = temp;
//	}
//	else if (b < c) {
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf(" % d\n % d\n % d\n", a, b, c);
//	return 0;
//}
//int main() {
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d\n", i);
//		}
//	}
//}
//求解最大公约数通过辗转相乘法;
//int main() {
//	int a1 = 24;
//	int a2 = 18;
//	int r = 0;
//	while (a1 % a2) {
//		r = a1%a2;
//		a1 = a2;
//		a2 = r;
//	}
//	printf("%d", a2);
//	return 0;
//int main() {
//	int i = 0;
//	int cout = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if (i % 4 == 0 && i % 100 != 0) {
//			printf("%d为普通闰年\n", i);
//			cout++;
//		}
//		else if (i % 100 == 0 && i % 400 == 0) {
//			printf("%d为世纪闰年\n", i);
//			cout++;
//		}
//	}
//	printf("%d", cout);
//	return 0;

//求100-200间的素数;
//int main() {
//	int i = 0;
//	int j = 0;
//	int cout = 0;
//	for (i = 100; i <= 200; i++) {
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			printf("%d该数是素数\n", i);
//			cout++;
//		}
//	}
//	printf("%d", cout);
//	return 0;
//<素数求解的n中境界>
//int main() {
//	int i = 0;
//	int cout = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9 ||i/10==9) {
//			cout++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d", cout);
//	return 0;
//}
//int main() {
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double ret = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		
//			sum1 = sum1 + flag * 1.0 / i;
//			flag = -flag;
//	}
//		/*else
//		{
//			sum2 = sum2 + 1.0/ i;
//		}*/
//	/*} */
//	ret = sum1 + sum2;
//	printf("%lf", sum1);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int temp = 0;
//	int arr[10] = { 50,60,70,80,55,45,32,59,48,44 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++) {
//		if (arr[i] > temp) {
//			temp = arr[i + 1];
//			arr[i + 1] = arr[i];
//			arr[i] = temp;
//		}
//	}
//	printf("%d\n", temp); 
//	return 0;
//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 10; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d ", i * j);
//		}
//		printf("\n");
//	}
//	return 0; 




