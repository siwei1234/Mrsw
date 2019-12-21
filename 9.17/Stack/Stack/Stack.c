#include "Stack.h"
// ��ʼ��ջ 
void StackInit(Stack* ps)
{
	ps->_a = (int*)malloc(sizeof(int)*10);
	ps->_capacity = 10;
	ps->_top = 0;
}
// ���ռ�
void check(Stack* ps)
{
	if (ps->_top == ps->_capacity)
	{
		ps->_capacity = ps->_capacity + 10;
		ps->_a = (int*)realloc(0, sizeof(int)*(ps->_capacity));
	}
}
// ��ջ 
void StackPush(Stack* ps, STDataType data)
{
	check(ps);
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
