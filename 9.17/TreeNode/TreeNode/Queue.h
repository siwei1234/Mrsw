#pragma once
#include "Tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef BTNode* QDataType;
typedef struct QueueNode
{
	QDataType _data;
	struct QueueNode* _next;
}QueueNode;

typedef struct Queue
{
	struct QueueNode* _front;
	struct QueueNode* _back;
}Queue;
// ��ʼ��ջ 
// ��ʼ������ 
void QueueInit(Queue* q)
{
	assert(q);
	q->_back = q->_front = NULL;
}
// ��β����� 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QueueNode* n = (QueueNode*)malloc(sizeof(QueueNode));
	n->_data = data;
	n->_next = NULL;
	if (q->_back == NULL)
	{
		q->_front = q->_back = n;
	}
	else
	{
		q->_back->_next = n;
		q->_back = n;
	}
}
// ��ͷ������ 
void QueuePop(Queue* q)
{
	assert(q);
	if (q->_front->_next == NULL)
	{
		free(q->_front);
		q->_front = q->_back = NULL;
	}
	else
	{
		QueueNode* next = q->_front->_next;
		free(q->_front);
		q->_front = next;
	}
}
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	return q->_front->_data;
}
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{
	assert(q);
	return q->_back->_data;
}
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q)
{
	int n = 0;
	QueueNode* cur = q->_front;
	while (cur)
	{
		n++;
		cur = cur->_next;
	}
	return n;
}
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q)
{
	if (q->_front == NULL)
		return 1;
	return 0;
}
// ���ٶ��� 
void QueueDestroy(Queue* q)
{
	QueueNode* cur = q->_front;
	while (cur)
	{
		QueueNode* next = q->_front->_next;
		free(cur);
		cur = next;
	}
	q->_front = q->_back = NULL;
}