#include "Stack.h"
int swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void InsertSort(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int end = i;
		int tmp = arr[end + 1];
		while (end >= 0)
		{
			if (arr[end] > tmp)
			{
				arr[end + 1] = arr[end];
				--end;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = tmp;
	}
}
void ShellSort(int* arr, int size)
{
	int gap = size;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < size - gap; i++)
		{
			int end = i;
			int tmp = arr[end + gap];
			while (end >= 0)
			{
				if (arr[end] > tmp)
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = tmp;
		}
		if (gap == 1)
		{
			break;
		}
	}
}
void SelectSort(int* arr, int size)
{
	int begin = 0;
	int end = size - 1;
	int max, min;
	while (begin < end)
	{
		min = begin;
		max = end;
		for (int i = begin; i <= end; i++)
		{
			if (arr[min] > arr[i])
			{
				min = i;
			}
			if (arr[max] < arr[i])
			{
				max = i;
			}
		}
		swap(&arr[begin], &arr[min]);
		if (begin == max)
			min = max;
		swap(&arr[end], &arr[max]);
		begin++;
		end--;
	}
}
void AdjustDown(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;
		}
		if (a[parent] < a[child])
		{
			swap(&a[parent], &a[child]);
			parent = child;
			child = child * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int* a, int n)
{
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}
void BubbleSort(int* a, int n)
{
	int flag;
	for (int i = n - 1; i >= 1; i--)
	{
		flag = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				flag = 1;
				swap(&a[j], &a[j + 1]);
			}
		}
		if (!flag)
			break;
	}
}
int Getmidindex(int* a, int begin, int end)
{
	int mid = (begin + end) >> 1;
	if (a[begin] > a[end])
	{
		if (a[end] > a[mid])
			return end;
		else if (a[begin] > a[mid])
			return mid;
		else
			return begin;
	}
	else
	{
		if (a[mid] < a[begin])
			return begin;
		else if (a[mid] > a[end])
			return end;
		else
			return mid;
	}
}
int PartSort(int* a, int begin, int end)
{
	int midindex = Getmidindex(a, begin, end);
	swap(&a[midindex], &a[end]);
	int key = a[end];
	int keyindex = end;
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		while (begin < end && a[end] >= key)
		{
			--end;
		}
		swap(&a[begin], &a[end]);
	}
	swap(&a[begin], &a[keyindex]);
	return begin;
}
int PartSort2(int* a, int begin, int end)
{
	int key = a[end];
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		a[end] = a[begin];
		while (begin < end && a[end] >= key)
		{
			--end;
		}
		a[begin] = a[end];
	}
	a[begin] = key;
	return begin;
}
int PartSort3(int* a, int begin, int end)
{
	int key = a[end];
	int cur = begin;
	int prev = begin - 1;
	while (cur < end)
	{
		if (a[cur] < key && ++prev != cur)
		{
			swap(&a[prev], &a[cur]);
		}
		cur++;
	}
	++prev;
	swap(&a[prev], &a[end]);
	return prev;
}
void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
		return;
	int keyindex = PartSort(a, begin, end);
	QuickSort(a, begin, keyindex - 1);
	QuickSort(a, keyindex + 1, end);
}
void QuickSortNonR(int* a, int begin, int end)
{
	Stack st;
	StackInit(&st);
	StackPush(&st, begin);
	StackPush(&st, end);
	while (!StackEmpty(&st))
	{
		int right = StackTop(&st);
		StackPop(&st);
		int left = StackTop(&st);
		StackPop(&st);
		int keyindex = PartSort(a, left, right);
		if (left < keyindex - 1)
		{
			StackPush(&st, left);
			StackPush(&st, keyindex - 1);
		}
		if (right > keyindex + 1)
		{
			StackPush(&st, keyindex + 1);
			StackPush(&st, right);
		}
	}
}
void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end)
		return;
	int mid = (begin + end) >> 1;
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int index = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}
	if (begin1 <= end1)
	{
		while (begin1 <= end1)
		{
			tmp[index++] = a[begin1++];
		}
	}
	else
	{
		while (begin2 <= end2)
		{
			tmp[index++] = a[begin2++];
		}
	}
	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * (n));
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}
void CountSort(int* a, int n)
{
	int min = a[0], max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
	int range = max - min + 1;
	int* countArr = (int*)malloc(sizeof(int) * range);
	memset(countArr, 0, sizeof(int)*range);
	for (int i = 0; i < n; i++)
	{
		countArr[a[i] - min]++;
	}
	int j = 0;
	for (int i = 0; i < range;i++)
	{
		while (countArr[i]--)
		{
			a[j++] = i + min;
		}
	}
}
int main()
{
	int arr[] = { 5,8,3,6,7,5,4,6 };
	//InsertSort(arr, 8);²åÈëÅÅÐò
	//ShellSort(arr, 8);Ï£¶ûÅÅÐò
	//SelectSort(arr, 8);Ñ¡ÔñÅÅÐò
	//HeapSort(arr, 8);ÍÆÅÅÐò
	//BubbleSort(arr, 8);Ã°ÅÝÅÅÐò
	//QuickSort(arr, 0, 7);
	//MergeSort(arr, 8);
	CountSort(arr, 8);
	for (int i = 0; i < 8; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}