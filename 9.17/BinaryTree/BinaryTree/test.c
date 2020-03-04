#include"heap.h"
void testTopk()
{
	int n = 10000;
	int* a = (int*)malloc(sizeof(int)*n);
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10000;
	}
	a[5] = 10001;
	a[50] = 10002;
	a[5051] = 10003;
	a[78] = 10004;
	a[66] = 10005;
	a[9999] = 10006;
	a[8888] = 10007;
	a[6524] = 10008;
	a[1105] = 10009;
	a[9784] = 10100;
	PrintfTopK(a, 10000, 10);
}
int main()
{
	testTopk();
	return 0;
	/*int arr[10] = { 27,15,19,34,65,37,25,49,28,18 };
	Heap hp;
	HeapCreate(&hp, arr, 10);
	HeapPush(&hp, 9);
	HeapPush(&hp, 99);
	HeapPrint(&hp);
	return 0;*/
}