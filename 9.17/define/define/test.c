#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define __DEBUG__
//#define DEBUG_PRINT printf("file:%s\tline:%d\tdate:%s\ttime:%s\n",__FILE__,__LINE__,__DATE__,__TIME__)
//#define MAX(a,b) ((a)>(b)?(a):(b))
//int main()
//{
//	int x = 5, y = 8;
//	DEBUG_PRINT;
//	int z = MAX(x++, y++);
//	printf("%d %d %d", x, y, z);
//	return 0;
//}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef __DEBUG__
		printf("%d", arr[i]);
#endif
	}
	return 0;
}