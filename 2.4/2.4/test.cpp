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
		printf("С���ֽ����д洢");
	}
	else {
		printf("����ֽ����д洢");
	}
}
//С��;
