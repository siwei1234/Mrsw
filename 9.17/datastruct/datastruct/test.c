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
	SeqListPrint(&a);
	SeqListDestory(&a);
	return 0;
}