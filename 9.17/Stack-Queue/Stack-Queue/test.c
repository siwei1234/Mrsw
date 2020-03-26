#include<stdio.h>
#include<assert.h>
#include<malloc.h>
// 初始化栈 
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// 栈顶
	int _capacity; // 容量 
}Stack;
void StackInit(Stack* ps)
{
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}

// 入栈 
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
// 出栈 
void StackPop(Stack* ps)
{
	assert(ps && ps->_top > 0);
	ps->_top--;
}
// 获取栈顶元素 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->_a[ps->_top - 1];
}
// 获取栈中有效元素个数 
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}
// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps)
{
	assert(ps);
	if (ps->_top == 0)
		return 1;
	return 0;
}
// 销毁栈 
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