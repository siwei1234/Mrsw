#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test()
{
	printf("Hello World\n");
}
int test1(int a)
{
	printf("%d\n", a);
	return a;
}
int main()
{
	void(*p)() = test;
	test();
	(*p)();
	p();
	int(*f)(int) = test1;
	test1(1);
	(*f)(2);
	f(3);
	return 0;
}