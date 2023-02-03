#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct wang {
//	char name[10];
//	char number[20];
//	int age;
//};
//struct person {
//	char name[10];
//	struct wang s1;
//};
//int main() {
//	struct wang s2 = { "高南","15161216540",20 };
//	struct person s3 = { "南方",{"高南","15161216540",20} };
//	printf("%s", s3.s1.name);
//	
//
//
//	return 0;
//}
//int main() {
//	char arr[20] = "丰富多彩";
//	char* p = arr;
//	printf("%s", p);
//	return 0;
//}
typedef struct stu {
	int age;
	char name[20];
	char num[20];
	char* ptr;
}stu;
//void print(stu p) {
//	printf("%d\n", p.age);
//	printf("%s\n", p.name);
//	printf("%s\n", p.num);
//	printf("%s\n", p.ptr);
//}
void print(stu* p) {
	printf("%d\n", p->age);
	printf("%s\n", p->name);
	printf("%s\n", p->num);
	printf("%s\n", p->ptr);
}
int main() {
	char arr[20] = "yyds";
	stu s={10,"dns","1555556488",arr};
	//print(s);
	print(&s);
	return 0;
}