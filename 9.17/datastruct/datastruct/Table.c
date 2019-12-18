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
// À≥–Ú±ÌŒ≤≤Â
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}
// À≥–Ú±ÌŒ≤…æ
void SeqListPopBack(SeqList* psl)
{
	if (psl->size != 0)
	{
		psl->size--;
	}
}
// À≥–Ú±ÌÕ∑≤Â
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
// À≥–Ú±ÌÕ∑…æ
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
// À≥–Ú±Ì≤È’“
int SeqListFind(SeqList* psl, SLDataType x)
{
	for (size_t i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			return i;
		}
	}
	return -1;
}
// À≥–Ú±Ì‘⁄posŒª÷√≤Â»Îx
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	if (psl->size < pos)
	{
		return;
	}
	CheckCapacity(psl);
	for (size_t i = psl->size; i > pos; i--)
	{
		psl->array[i] = psl->array[i - 1];
	}
	psl->array[pos] = x;
	psl->size++;
}
// À≥–Ú±Ì…æ≥˝posŒª÷√µƒ÷µ
void SeqListErase(SeqList* psl, size_t pos)
{
	if (psl->size < pos)
	{
		return;
	}
	for (size_t i = pos; i < psl->size - 1; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
	psl->size--;
}