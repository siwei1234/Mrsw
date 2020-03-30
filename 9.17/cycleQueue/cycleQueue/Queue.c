#include<stdio.h>
#include<assert.h>
#include<malloc.h>
typedef struct {
	int* a;
	int n;
	int front;
	int rear;
} MyCircularQueue;

/** Initialize your data structure here. Set the size of the queue to be k. */
MyCircularQueue* myCircularQueueCreate(int k) {
	MyCircularQueue* cp = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	cp->a = (int*)malloc(sizeof(int) * (k + 1));
	cp->n = k + 1;
	cp->front = cp->rear = 0;
	return cp;
}

/** Checks whether the circular queue is full or not. */
int myCircularQueueIsFull(MyCircularQueue* obj) {
	if (obj->rear + 1 == obj->front)
		return 1;
	if (((obj->rear + 1) % (obj->n)) == obj->front)
		return 1;
	return 0;
}
/** Checks whether the circular queue is empty or not. */
int myCircularQueueIsEmpty(MyCircularQueue* obj) {
	if (obj->front == obj->rear)
		return 1;
	return 0;
}



/** Insert an element into the circular queue. Return true if the operation is successful. */
void myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
	if (!myCircularQueueIsFull(obj))
	{
		obj->a[obj->rear] = value;
		obj->rear++;
		if (obj->rear == obj->n)
			obj->rear = 0;
	}
}

/** Delete an element from the circular queue. Return true if the operation is successful. */
void myCircularQueueDeQueue(MyCircularQueue* obj) {
	if (!myCircularQueueIsEmpty(obj))
	{
		obj->front++;
		if (obj->front == obj->n)
		{
			obj->front = 0;
		}
	}
}

/** Get the front item from the queue. */
int myCircularQueueFront(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return -1;
	return obj->a[obj->front];
}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return -1;
	int rearNext = obj->rear - 1;
	if (obj->rear == 0)
		rearNext = obj->n - 1;
	return obj->a[rearNext];
}

void myCircularQueueFree(MyCircularQueue* obj) {
	free(obj->a);
	free(obj);
}
void Print(MyCircularQueue* obj)
{
	while (!myCircularQueueIsEmpty(obj))
	{
		printf("%d	", obj->a[obj->front]);
		obj->front++;
		if (obj->front == obj->n)
			obj->front = 0;
	}
}
int main()
{
	MyCircularQueue* obj = myCircularQueueCreate(3);
	myCircularQueueEnQueue(obj, 1);
	myCircularQueueEnQueue(obj, 2);
	myCircularQueueEnQueue(obj, 3);
	myCircularQueueEnQueue(obj, 4);


	myCircularQueueDeQueue(obj);

	int param_3 = myCircularQueueFront(obj);
	printf("%d\n", param_3);

	int param_4 = myCircularQueueRear(obj);
	printf("%d\n", param_4);

	int param_5 = myCircularQueueIsEmpty(obj);

	int param_6 = myCircularQueueIsFull(obj);

	Print(obj);
	
	myCircularQueueFree(obj);
	return 0;
}