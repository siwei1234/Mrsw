#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct s
//{
//	int a;
//	struct s* next;
//};
//struct s1
//{
//	int a;
//	struct s s1;
//};
struct s1
{
	char c1;
	int i;
	char c2;
};
struct s2
{
	char c1;
	char c2;
	int i;
};
struct s3
{
	double d;
	char c;
	int i;
};
struct s4
{
	char c1;
	struct s3 s3;
	double d;
};
int main()
{
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	printf("%d\n", sizeof(struct s3));
	printf("%d\n", sizeof(struct s4));
	return 0;
}
//struct Stu
//{
//	char id[20];
//	char name[20];
//	int age;
//}s1 = { "1704","李四",18 };
//typedef struct Stuent
//{
//	char id[20];
//	char name[20];
//	int age;
//}Stuent;
//int main()
//{
//	struct Stu s2 = { "1705","张三",20 };
//	struct Stu s3;
//	Stuent s4 = { "1702","赵六",19 };
//	strcpy(s3.id, "1703");
//	strcpy(s3.name, "王五");
//	s3.age = 18;
//	return 0;
//}