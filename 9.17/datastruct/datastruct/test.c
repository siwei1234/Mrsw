#define _CRT_SECURE_NO_WARNINGS 1	
#include "ds.h"

int main()
{
	SeqList a;
	SeqListInit(&a, 10);
	SeqListPushBack(&a, 0);
	SeqListPushBack(&a, 1);
	SeqListPushBack(&a, 2);
	SeqListPushBack(&a, 3);
	SeqListPushFront(&a, 0);
	SeqListPopFront(&a);
	SeqListPopBack(&a);
	SeqListInsert(&a, 1, 50);
	SeqListErase(&a, 0);
	SeqListPrint(&a);
	SeqListDestory(&a);
	return 0;
}