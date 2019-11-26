#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

void InitContact(p pc)
{
	pc->size = 0;
	pc->data = (member*)malloc(sizeof(member)* MAX);
	pc->capacity = MAX;
}
void AddContact(p pc)
{
	member cur;
	if (CheckCapacity(pc) == 0)
	{
		printf("通讯录已满，添加失败\n");
		return;
	}
	printf("请输入姓名：\n");
	scanf("%s", cur.name);
	printf("请输入性别：\n");
	scanf("%s", cur.gender);
	printf("请输入年龄：\n");
	scanf("%d", &cur.age);
	printf("请输入电话：\n");
	scanf("%s", cur.tel);
	pc->data[pc->size] = cur;
	pc->size++;
}
int CheckCapacity(p pc)
{
	if (pc->size == pc->capacity)
	{
		pc->data = (member*)realloc(pc->data, pc->capacity + 10);
		if (pc->data == NULL)
		{
			return 0;
		}
	}
	pc->capacity = pc->capacity + 10;
	return 1;
}
void DelContact(p pc)
{
	char name[NAME];
	printf("请输入你要删除的名字：\n");
	scanf("%s", name);
	int ret = FindContact(pc, name);
	if (ret == -1)
	{
		printf("此人不存在，删除失败\n");
		return;
	}
	for (int i = ret; i < pc->size - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->size--;
	printf("删除成功\n");
}
void SearchContact(p pc) 
{
	char name[NAME];
	printf("请输入你要查询的名字：\n");
	scanf("%s", name);
	int ret = FindContact(pc, name);
	if (ret == -1)
	{
		printf("此人不存在，查询失败\n");
		return;
	}
	printf("***************************\n");
	printf("姓名：%s\n",pc->data[ret].name);
	printf("性别：%s\n", pc->data[ret].gender);
	printf("年龄：%d\n", pc->data[ret].age);
	printf("电话：%s\n", pc->data[ret].tel);
	printf("***************************\n");
}
int FindContact(p pc, char* name)
{
	for (int i = 0; i < pc->size; i++)
	{
		if (strcmp(pc->data[i].name,name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void ModifyContact(p pc)
{
	char name[NAME];
	printf("请输入你要修改的名字：\n");
	scanf("%s", name);
	int ret = FindContact(pc, name);
	if (ret == -1)
	{
		printf("此人不存在，修改失败\n");
		return;
	}
	printf("请输入姓名：\n");
	scanf("%s", pc->data[ret].name);
	printf("请输入性别：\n");
	scanf("%s", pc->data[ret].gender);
	printf("请输入年龄：\n");
	scanf("%d", &pc->data[ret].age);
	printf("请输入电话：\n");
	scanf("%s", pc->data[ret].tel);
	printf("修改成功\n");
}
void SortContact(p pc)
{
	for (int i = 0; i < pc->size; i++)
	{
		for (int j = 1; j < pc->size; j++)
		{
			if (strcmp(pc->data[j - 1].name, pc->data[j].name) == 1)
			{
				member tmp = pc->data[i - 1];
				pc->data[i - 1] = pc->data[i];
				pc->data[i] = tmp;
			}
		}
	}
}
void ShowContact(p pc)
{
	for (int i = 0; i < pc->size; i++)
	{
		printf("***************************\n");
		printf("姓名：%s\n", pc->data[i].name);
		printf("性别：%s\n", pc->data[i].gender);
		printf("年龄：%d\n", pc->data[i].age);
		printf("电话：%s\n", pc->data[i].tel);
		printf("***************************\n");
	}
}
void LoadData(p pc)
{
	member cur;
	FILE* pF = fopen("c.txt", "rb");
	if (pF == NULL)
	{
		printf("文件打开失败\n");
		return;
	}
	while (fread(&cur, sizeof(member), 1, pF))
	{
		if (CheckCapacity(pc))
		{
			pc->data[pc->size] = cur;
			pc->size++;
		}
	}
	fclose(pF);
}
void SaveData(p pc)
{
	FILE* pF = fopen("c.txt", "wb");
	if (pF == NULL)
	{
		printf("文件打开失败\n");
		return;
	}
	for (int i = 0; i < pc->size; i++)
	{
		fwrite(pc->data + i, sizeof(member), 1, pF);
	}
	fclose(pF);
}