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
	MyCircularQueue* cp = (MyCircularQueue*)malloc(sizeof(MyCircularQueue)*(k + 1));
	cp->n = k + 1;
	cp->front = cp->rear = 0;
	return cp;
}

/** Checks whether the circular queue is full or not. */
int myCircularQueueIsFull(MyCircularQueue* obj) {
	obj->rear = (obj->rear + 1) % (obj->n);
	if (obj->rear == obj->front)
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
		obj->rear %= obj->n;
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
	if (!myCircularQueueIsEmpty(obj))
		return -1;
	return obj->a[obj->front];
}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {
	if (!myCircularQueueIsEmpty(obj))
		return -1;
	int rearNext;
	if (obj->rear == 0)
		rearNext = obj->n - 1;
	return obj->a[rearNext];
}

void myCircularQueueFree(MyCircularQueue* obj) {
	free(obj->a);
	free(obj);

}
int main()
{

}