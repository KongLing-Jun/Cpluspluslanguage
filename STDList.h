#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;

//链表开辟节点
LTNode* BuyLTNode(LTDataType x)
{
	LTNode* temp = (LTNode*)malloc(sizeof(LTNode));
	if (temp == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	temp->data=x;
	temp->prev = NULL;
	temp->next = NULL;
	return temp;
}

//链表初始化
LTNode* Init()
{
	LTNode* phead = BuyLTNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

//链表的打印
void LTPrint(LTNode* phead)
{
	assert(phead);
	printf("guard<==>");
	LTNode* cur = phead->next;
	while (cur!=phead)
	{
		printf("%d<==>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//判断链表是否为空
bool LTEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next == phead;
}

//链表尾插
void LTPushBack(LTNode* phead,LTDataType x)
{
	assert(phead);

	//LTInsert(phead, x);

	LTNode* tail = phead->prev;
	LTNode* newnode = BuyLTNode(x);

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}

//链表的头插
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* first = phead->next;
	LTNode* newnode = BuyLTNode(x);
	newnode->next = first;
	first->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;
}

//链表的头删
void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));

	LTNode* second = phead->next->next;
	free(phead->next);
	phead->next = second;
	second->prev = phead;
}

//链表的尾删
void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));
	//LTErase(phead->prev);

	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;

	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;
}

//链表的查找
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//在pos之前插入
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* newnode = BuyLTNode(x);
	prev->next = newnode;
	newnode->prev = prev;
	pos->prev = newnode;
	newnode->next = pos;
}

//删除pos位置的值
void LTErase(LTNode* pos)
{
	assert(pos);
	assert(!LTEmpty(pos));
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;
	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
	pos = NULL;
}

//销毁链表
void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}