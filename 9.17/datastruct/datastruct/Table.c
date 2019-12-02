#define _CRT_SECURE_NO_WARNINGS 1
#include "ds.h"
void SeqListInit(SeqList* psl, size_t capacity)
{
	psl = (SLDataType*)malloc(sizeof(SLDataType) * 10);
	psl->size = 0;
	psl->capicity = 0;
}
void SeqListDestory(SeqList* psl)
{
	psl->size = 0;
	psl->capicity = 0;
	free(psl);
	psl = NULL;
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
	if (psl->size = psl->capicity)
	{
		size_t newcapicity = psl->capicity < 0 ? 2 : psl->capicity * 2;
		psl = (SLDataType*)realloc(0, sizeof(SLDataType)*newcapicity);
		psl->capicity = newcapicity;
	}
}
// 顺序表尾插
//void SeqListPushBack(SeqList* psl, SLDataType x);
// 顺序表尾删
//void SeqListPopBack(SeqList* psl);
// 顺序表头插
//void SeqListPushFront(SeqList* psl, SLDataType x);
// 顺序表头删
//void SeqListPopFront(SeqList* psl);
// 顺序表查找
//int SeqListFind(SeqList* psl, SLDataType x);
// 顺序表在pos位置插入x
//void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);
// 顺序表删除pos位置的值
//void SeqListErase(SeqList* psl, size_t pos);