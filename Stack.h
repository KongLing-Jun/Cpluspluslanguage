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

//��ʼ��
void STInit(ST* pst)
{
	assert(pst);
	pst->a = NULL;
	pst->top = 0;//topΪ���һ��Ԫ�ص���һ��λ��
	pst->capacity = 0;
}

//����ջ
void STDestroy(ST* pst)
{
	assert(pst);
	free(pst->a);
	pst->a = NULL;
	pst->top = 0;
	pst->capacity = 0;
}

//��ջ
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

//�п�
bool STEmpty(ST* pst)
{
	assert(pst);
	return pst->top == 0;
}

//��ջ
void STPop(ST* pst)
{
	assert(pst);
	assert(!STEmpty(pst));
	pst->top--;
}

//��ʾջ��Ԫ��
STDataType STTop(ST* pst)
{
	assert(pst);
	assert(!STEmpty(pst));
	return pst->a[pst->top - 1];
}

//ջ��Ԫ�ظ���
int STSize(ST* pst)
{
	assert(pst);
	return pst->top;
}

////STL�µ�stackʵ��
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