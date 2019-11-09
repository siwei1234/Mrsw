#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int x, y;
	int ret = 0;
	int input = 1;
	int(*p[5])(int x, int y) = { 0,add,sub,mul,div };
	while (input)
	{
		printf("********  0.exit  ******\n");
		printf("***  1.add    2.sub*****\n");
		printf("***  3.mul    4.div*****\n");
		printf("*************************\n");
		printf("请选择：\n");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			printf("请输入操作数：\n");
			scanf("%d%d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else if (input == 0)
		{
			break;
		}
		else 
		{
			printf("输入有误\n");
		}
		printf("%d\n", ret);
	}
	return 0;
}