#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

//初始化
void STInit(ST* pst)
{
	assert(pst);
	pst->a = NULL;
	pst->top = 0;//top为最后一个元素的下一个位置
	pst->capacity = 0;
}

//销毁栈
void STDestroy(ST* pst)
{
	assert(pst);
	free(pst->a);
	pst->a = NULL;
	pst->top = 0;
	pst->capacity = 0;
}

//入栈
void STPush(ST* pst,STDataType x)
{
	if (pst->top == pst->capacity)
	{
		int newcapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(pst->a,sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			perror("malloc fail");
			return;
		}
		pst->a = tmp;
		pst->capacity = newcapacity;
	}
	pst->a[pst->top] = x;
	pst->top++;
}

//判空
bool STEmpty(ST* pst)
{
	assert(pst);
	return pst->top == 0;
}

//出栈
void STPop(ST* pst)
{
	assert(pst);
	assert(!STEmpty(pst));
	pst->top--;
}

//显示栈顶元素
STDataType STTop(ST* pst)
{
	assert(pst);
	assert(!STEmpty(pst));
	return pst->a[pst->top - 1];
}

//栈内元素个数
int STSize(ST* pst)
{
	assert(pst);
	return pst->top;
}

////STL下的stack实现
//#include<vector>
//namespace ljh
//{
//	template<class T,class container=std::vector<T>>
//	class stack
//	{
//		stack()
//		{}
//
//		void push(const T& x)
//		{
//			_c.push_back(x);
//		}
//
//		void pop()
//		{
//			_c.pop_back();
//		}
//
//		T& top()
//		{
//			return _c.back();
//		}
//
//		const T& top() const
//		{
//			return _c.back();
//		}
//
//		size_t size() const
//		{
//			return _c.size();
//		}
//
//		bool empty() const
//		{
//			return _c.empty();
//		}
//
//	private:
//		container _c;
//	};
//}