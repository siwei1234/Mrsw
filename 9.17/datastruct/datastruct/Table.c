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
// ˳���β��
//void SeqListPushBack(SeqList* psl, SLDataType x);
// ˳���βɾ
//void SeqListPopBack(SeqList* psl);
// ˳���ͷ��
//void SeqListPushFront(SeqList* psl, SLDataType x);
// ˳���ͷɾ
//void SeqListPopFront(SeqList* psl);
// ˳������
//int SeqListFind(SeqList* psl, SLDataType x);
// ˳�����posλ�ò���x
//void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);
// ˳���ɾ��posλ�õ�ֵ
//void SeqListErase(SeqList* psl, size_t pos);