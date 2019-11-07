#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stuent1
{
	char name[20];
	int age;
}s1 = { "wangwu",20 };
typedef struct Stuent
{
	char name[20];
	int age;
}Stu;
void f(struct Stuent1* p)
{
	printf("name = %s	age = %d\n", (*p).name, (*p).age);
	printf("name = %s	age = %d\n", p->name, p->age);
}
int main()
{
	Stu s2 = { "zhangsan",18 };
	struct Stuent1 s3 = { "lisi",20 };
	f(&s1);
	f(&s2);
	f(&s3);
	return 0;
}