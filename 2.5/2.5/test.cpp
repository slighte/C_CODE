#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//int main() {
//	char a = 128; 
//	printf("%u\n", a);
//	return 0;
//} 
//int main() {
//	int i = -20; 
//	unsigned int j= 10;
//	printf("%d\n", i + j);
//	return 0;
//}
#include<windows.h>
//int main() {
//	unsigned int i;
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//unsigned char i = 0;
//int main() {
//	for (i = 0; i <= 255; i++) {
//		printf("hello,world\n");
//	}
//	return 0;
//}
int main() {
	int n = 9;
	float* pFloat = (float*)&n;
	printf("*pfloat��ֵΪ:%d\n", *pFloat);
	printf("n��ֵΪ:%d\n", n);
	*pFloat = 9.0;
	printf("*pfloat��ֵΪ:%f\n", *pFloat);
	printf("n��ֵΪ:%d\n", n);

	return 0;
}