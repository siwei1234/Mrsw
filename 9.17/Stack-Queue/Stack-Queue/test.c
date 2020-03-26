#include<stdio.h>
#include<assert.h>
#include<malloc.h>
// ��ʼ��ջ 
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// ջ��
	int _capacity; // ���� 
}Stack;
void StackInit(Stack* ps)
{
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}

// ��ջ 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	if (ps->_top == ps->_capacity)
	{
		ps->_capacity = ps->_capacity + 10;
		ps->_a = (STDataType*)realloc(ps->_a, sizeof(STDataType)*(ps->_capacity));
	}
	ps->_a[ps->_top] = data;
	ps->_top++;
}
// ��ջ 
void StackPop(Stack* ps)
{
	assert(ps && ps->_top > 0);
	ps->_top--;
}
// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->_a[ps->_top - 1];
}
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps)
{
	assert(ps);
	if (ps->_top == 0)
		return 1;
	return 0;
}
// ����ջ 
void StackDestroy(Stack* ps)
{
	assert(ps);
	ps->_top = 0;
	ps->_capacity = 0;
	free(ps->_a);
	ps->_a = NULL;
}

typedef struct {
	Stack st1;
	Stack st2;
} CQueue;


CQueue* cQueueCreate() {
	CQueue* q = (CQueue*)malloc(sizeof(CQueue));
	StackInit(&q->st1);
	StackInit(&q->st2);
	return q;
}

void cQueueAppendTail(CQueue* obj, int value) {
	StackPush(&obj->st1, value);
}

int cQueueDeleteHead(CQueue* obj) {
	if (StackEmpty(&obj->st1) && StackEmpty(&obj->st2))
		return -1;
	int data;
	if (StackEmpty(&obj->st2))
	{
		while (!StackEmpty(&obj->st1))
		{
			data = StackTop(&obj->st1);
			StackPush(&obj->st2, data);
			StackPop(&obj->st1);
		}
	}
	data = StackTop(&obj->st2);
	StackPop(&obj->st2);
	return data;
}

void cQueueFree(CQueue* obj) {
	StackDestroy(&obj->st1);
	StackDestroy(&obj->st2);
	free(obj);
}

int main()
{
	CQueue* obj = cQueueCreate();
	cQueueAppendTail(obj, 8);

	int param_2 = cQueueDeleteHead(obj);
	printf("%d\n", param_2);
	cQueueFree(obj);
}