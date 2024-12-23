#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->phead = pq->ptail = NULL;
	pq->size = 0;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}

void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail\n");
		return;
	}
	newnode->next = NULL;
	newnode->data = x;
	if (pq->ptail == NULL)
	{
		assert(pq->phead == NULL);
		pq->phead = pq->ptail = newnode;
	}
	else
	{
        pq->ptail->next = newnode;
		pq->ptail = newnode;
	}
	pq->size++;
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	if (pq->phead->next==NULL)
	{
		assert(pq->ptail->next == NULL);
		free(pq->phead);
		pq->phead = NULL;
		pq->ptail = NULL;
	}
	else
	{
		QNode* cur = pq->phead->next;
		free(pq->phead);
		pq->phead = cur;
	}
	pq->size--;
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->phead->data;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->ptail->data;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}

//STL下queue的实现
#include<queue>
#include<list>
namespace ljh
{
	template<class T,class container=std::deque<T>>
	//template<class T,class container=std::list<T>>
	class queue
	{
	public:
		queue()
		{}

		void push(const T& x)
		{
			_c.push_back(x);
		}

		void pop()
		{
			_c.pop_front();
		}

		T& back()
		{
			return _c.back();
		}

		const T& back()const
		{
			return _c.back();
		}

		T& front()
		{
			return _c.front();
		}

		const T& front()const
		{
			return _c.front();
		}

		size_t size()const
		{
			return _c.size();
		}

		bool empty()const
		{
			return _c.empty();
		}

	private:
		container _c;
	};
}