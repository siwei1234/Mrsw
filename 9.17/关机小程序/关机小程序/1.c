#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ĵ��Լ�����һ�����ڹػ������롰��硱ȡ���ػ�\n");
		scanf("%s", &a);
		if (strcmp(a, "���") == 0)
		{
			system("shutdown -a");
		}
	}
	return 0;
}