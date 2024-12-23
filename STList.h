#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLTDateType;
typedef struct SListNode
{
	struct SListNode* next;
	SLTDateType date;
}SListNode;

// ��̬����һ�����
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* tmp = (SListNode*)malloc(sizeof(SListNode));
	if (tmp == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	tmp->date = x;
	tmp->next = NULL;
	return tmp;
}

// �������ӡ
void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->date);
		cur = cur->next;
	}
	printf("NULL\n");
}

// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	if (*pplist==NULL)
	{
		*pplist = BuySListNode(x);
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next!=NULL)
		{
			tail = tail->next;
		}
		tail->next = BuySListNode(x);
	}
}

// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		SListNode* next = *pplist;
		newnode->next = next;
		*pplist = newnode;
	}
}

// �������βɾ
void SListPopBack(SListNode** pplist)
{
	assert(*pplist!=NULL);
	SListNode* tail = *pplist;
	if (tail->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

// ������ͷɾ
void SListPopFront(SListNode** pplist)
{
	assert(*pplist);
	if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode* next = (*pplist)->next;
		free(*pplist);
		*pplist = next;
	}
}

// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* cur = plist;
	while (cur)
	{
		if (cur->date == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

// ��������posλ��֮�����x
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

//��������posλ��֮ǰ����x
void SListInsert(SListNode** pphead, SListNode* pos, SLTDateType x)
{
	assert(pphead);
	assert(pos);
	if (*pphead = pos)
	{
		SListPushFront(pphead, x);
	}
	else
	{
		SListNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SListNode* newnode = BuySListNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

//��������posλ��֮��ɾ��
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	assert(pos->next);
	SListNode* next = pos->next;
	pos->next = next->next;
	free(pos->next);
}

// ɾ��posλ�õ�ֵ
void SListErase(SListNode** pphead, SListNode* pos)
{
	assert(pphead);
	assert(pos);

	if (pos == *pphead)
	{
		SListPopFront(pphead);
	}
	else
	{
		SListNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = pos->next;
		free(pos);
	}
}