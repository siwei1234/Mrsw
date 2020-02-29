#include "heap.h"
void AdjustDown(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (a[child + 1] < a[child] && child + 1 < n)
			++child;
		if (a[parent] > a[child])
		{
			int tmp = a[parent];
			a[parent] = a[child];
			a[child] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}
void Adjustup(int*a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] > a[child])
		{
			int tmp = a[parent];
			a[parent] = a[child];
			a[child] = tmp;
			child = parent;
			parent = (child - 1) / 2;
		}
		else
			break;
	}
}
void HeapCreate(Heap* hp, int* a, size_t n)
{
	hp->a = (int*)malloc((sizeof(int)*n));
	memcpy(hp->a, a, sizeof(int)*n);
	hp->size = n;
	hp->capacity = n;
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(hp->a, hp->size, i);
	}
}
void Heapsort(int* a, size_t n)
{
	int end = n - 1;
	while (end)
	{
		int tmp = a[end];
		a[end] = a[0];
		a[0] = tmp;
		AdjustDown(a, end, 0);
		--end;
	}
}
void HeapPush(Heap* hp, int x)
{
	if (hp->size == hp->capacity)
	{
		size_t newcapacity = hp->capacity * 2;
		hp->a = (int*)realloc(hp->a, sizeof(int)*newcapacity);
		hp->capacity = newcapacity;
	}
	hp->a[hp->size++] = x;
	Adjustup(hp->a, hp->size - 1);
}
void HeapPrint(Heap* hp)
{
	for (size_t i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->a[i]);
	}
}
void HeapPop(Heap* hp)
{
	int tmp = hp->a[0];
	hp->a[0] = hp->a[hp->size - 1];
	hp->a[hp->size - 1] = tmp;
	hp->size--;
	AdjustDown(hp->a, hp->size, 0);
}
int HeapTop(Heap* hp)
{
	return hp->a[0];
}