#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int cout_bit(unsigned int b) {
//	int cout = 0;
//	while (b) {
//		
//		if ((b%2)== 1) {
//			cout++;
//		}
//		b = b / 2;
//	}
//	return cout;
//}
//int cout_bit(int b) {
//	int i = 0;
//	int cout = 0;
//	for (i = 0; i < 32; i++) {
//		if ((b >> i) & 1 == 1) {
//			cout++;
//		}
//	}
//	return cout;
//}
//int cout_bit(int b) {
//	int cout=0;
//	while (b) {
//		b = b & (b - 1);
//		cout++;
//	}
//	return cout;
//}
//int main() {
//	int i = 0;
//	int cout = 0;
//	scanf("%d", &i);
//	cout=cout_bit(i);
//	printf("%d ", cout);
//	return 0;
//}
//int compare_cout_bit(int a, int b) {
//	int cout = 0;
//	int i = 0;
//	for(i=0;i<32;i++){
//		if(((a >> i) & 1) != ((b >> i) & 1))
//			cout++;
//	}
//	return cout;
//}
//int compare_cout_bit(int a, int b) {
//	int temp = a ^ b;
//	return cout_bit(temp);
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int cout = 0;
//	scanf("%d%d", &a, &b);
//	cout=compare_cout_bit(a,b);
//	printf("%d", cout);
//	return 0;
//}
void print_cout(int a) {
	int i = 0;
	int j = 0;
	for (i = 1; i <= 31; i=i + 2) {
		printf("%d ", ((a >> i) & 1));
	}
	printf("\n");
	for (i = 0; i <= 30; i = i + 2) {
		printf("%d ", ((a >> i) & 1));
	}
	
	
}
int main() {
	int a = 0;
	scanf("%d", &a);
	print_cout(a);

	return 0;
}
