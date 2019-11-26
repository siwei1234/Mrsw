#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 1000;
//	FILE* pout = fopen("test.txt", "w");
//	fwrite(&a, 4, 1, pout);
//	fclose(pout);
//	FILE* pin = fopen("test.txt", "r");
//	fread(&a, 4, 1, pin);
//	printf("%d", a);
//	fclose(pin);
//	return 0;
//}
//int main()
//{
//	char *a = "helloworld";
//	FILE* pout = fopen("test.txt", "w");
//	while (*a != '\0')
//	{
//		fputc(*a, pout);
//		a++;
//	}
//	fclose(pout);
//	FILE* pin = fopen("test.txt", "r");
//	char ch = fgetc(pin);
//	while (ch != EOF)
//	{
//		printf("%c", ch);
//		ch = fgetc(pin);
//	}
//    fclose(pin);
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	fseek(p, 3, SEEK_SET);
//	fseek(p, 2, SEEK_CUR);
//	char ch = fgetc(p);
//	while (ch != EOF)
//	{
//		printf("%c", ch);
//		ch = fgetc(p);
//	}
//	printf("\n");
//	fseek(p, 0, SEEK_SET);
//	fseek(p, -5, SEEK_END);
//	char ch1 = fgetc(p);
//	while (ch1 != EOF)
//	{
//		printf("%c", ch1);
//		ch1 = fgetc(p);
//	}
//  fclose(p);
//	return 0;
//}
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	fseek(p, 0, SEEK_END);
//	long int size = ftell(p);
//	printf("%d", size);
//}
struct student
{
	char name[20];
	int age;
};
int main()
{
	struct student s = { "siwei",18 };
	FILE* p = fopen("studet.dat", "wb");
	if (p == NULL)
	{
		printf("打开文件失败\n");
		return 0;
	}
	fwrite(&s, 24, 1, p);
	fclose(p);
	return  0;
}