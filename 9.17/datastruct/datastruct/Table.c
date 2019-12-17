#define _CRT_SECURE_NO_WARNINGS 1
#include "ds.h"
void SeqListInit(SeqList* psl, size_t capacity)
{
	psl->size = 0;
	psl->array = (SeqList*)malloc(sizeof(SeqList) * capacity);
	psl->capicity = capacity;
}
void SeqListDestory(SeqList* psl)
{
	psl->size = 0;
	psl->capicity = 0;
	free(psl->array);
	psl->array = NULL;
}
void SeqListPrint(SeqList* psl)
{
	for (size_t i = 0; i < psl->size; i++)
	{
		printf("%d\n", psl->array[i]);
	}
}
void CheckCapacity(SeqList* psl)
{
	if (psl->size == psl->capicity)
	{
		size_t newcapicity = psl->capicity < 0 ? 2 : psl->capicity * 2;
		psl->array = (SeqList*)realloc(0, sizeof(SeqList)*newcapicity);
		psl->capicity = newcapicity;
	}
}
// 顺序表尾插
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}
// 顺序表尾删
void SeqListPopBack(SeqList* psl)
{
	if (psl->size != 0)
	{
		psl->size--;
	}
}
// 顺序表头插
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	CheckCapacity(psl);
	for (size_t i = psl->size; i > 0; i--)
	{
		psl->array[i] = psl->array[i - 1];
	}
	psl->array[0] = x;
	psl->size++;
}
// 顺序表头删
void SeqListPopFront(SeqList* psl)
{
	if (psl->size != 0)
	{
		for (size_t i = 0; i < psl->size - 1; i++)
		{
			psl->array[i] = psl->array[i + 1];
		}
		psl->size--;
	}
}
// 顺序表查找
//int SeqListFind(SeqList* psl, SLDataType x);
// 顺序表在pos位置插入x
//void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);
// 顺序表删除pos位置的值
//void SeqListErase(SeqList* psl, size_t pos);