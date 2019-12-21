#include "Stack.h"
// 初始化栈 
void StackInit(Stack* ps)
{
	ps->_a = (int*)malloc(sizeof(int)*10);
	ps->_capacity = 10;
	ps->_top = 0;
}
// 检查空间
void check(Stack* ps)
{
	if (ps->_top == ps->_capacity)
	{
		ps->_capacity = ps->_capacity + 10;
		ps->_a = (int*)realloc(0, sizeof(int)*(ps->_capacity));
	}
}
// 入栈 
void StackPush(Stack* ps, STDataType data)
{
	check(ps);
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
