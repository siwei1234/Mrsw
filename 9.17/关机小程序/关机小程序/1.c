#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("你的电脑即将在一分钟内关机，输入“大哥”取消关机\n");
		scanf("%s", &a);
		if (strcmp(a, "大哥") == 0)
		{
			system("shutdown -a");
		}
	}
	return 0;
}