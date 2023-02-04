#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check_sys(int a) {
	char* p = (char*)&a;
	return *p;
}
int main() {
	int ret = 0;
	int a = 10;
	ret = check_sys(a);
	if (ret == 10) {
		printf("小端字节序列存储");
	}
	else {
		printf("大端字节序列存储");
	}
}
//小端;
