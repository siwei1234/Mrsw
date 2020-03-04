#pragma once
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<time.h>
typedef struct Heap
{
	int* a;
	size_t size;
	size_t capacity;
}Heap;
void AdjustDown(int* a, int n, int root);
void Heapsort(int* a, size_t n);
void HeapCreate(Heap* hp,int* a, size_t n);
void HeapPush(Heap* hp, int x);
void HeapPop(Heap* hp);
int HeapTop(Heap* hp);
void HeapPrint(Heap* hp);
void Adjustup(int*a, int child);
void PrintfTopK(int* a, int n, int k);
void HeapDestory(Heap* hp);
