#include"heap.h"
int main()
{
	int arr[10] = { 27,15,19,34,65,37,25,49,28,18 };
	Heap hp;
	HeapCreate(&hp, arr, 10);
	HeapPush(&hp, 9);
	HeapPush(&hp, 99);
	HeapPrint(&hp);
	return 0;
}