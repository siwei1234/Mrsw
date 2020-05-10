#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int* a;
	int* s;
	int size;
	int capacity;
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
	MinStack* obj = (MinStack*)malloc(sizeof(MinStack));
	obj->a = NULL;
	obj->s = NULL;
	obj->size = obj->capacity = 0;
	return obj;
}

void minStackPush(MinStack* obj, int x) {
	if (obj->size == obj->capacity)
	{
		obj->capacity += 10;
		obj->a = (int*)realloc(obj->a, sizeof(int)*(obj->capacity));
		obj->s = (int*)realloc(obj->s, sizeof(int)*(obj->capacity));
	}

	if (obj->size == 0 || obj->s[obj->size - 1] > x)
	{
		obj->s[obj->size] = x;
		obj->a[obj->size++] = x;
	}
	else
	{
		obj->s[obj->size] = obj->s[obj->size - 1];
		obj->a[obj->size++] = x;
	}
}

void minStackPop(MinStack* obj) {
	obj->size--;
}

int minStackTop(MinStack* obj) {
	return obj->a[obj->size - 1];
}

int minStackMin(MinStack* obj) {
	return obj->s[obj->size - 1];
}

void minStackFree(MinStack* obj) {
	free(obj->a);
	free(obj->s);
	obj->a = obj->s = NULL;
	obj->size = obj->capacity = 0;
}

int main()
{
	return 0;
}