#include "Stack.h"
// ��ʼ��ջ 
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
