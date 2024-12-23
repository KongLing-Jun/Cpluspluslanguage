#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDateType;
//˳���Ķ�̬�洢
typedef struct SeqList
{
	SLDateType* array;//ָ��̬���ٵ�����
	int size;//��Ч���ݵĸ���
	int capacity;//�����ռ�Ĵ�С
}SeqList;

//��������ɾ��Ľӿ�
//˳���ĳ�ʼ��
void SeqListInit(SeqList* psl)
{
	assert(psl);
	psl->array = (SLDateType*)malloc(sizeof(SLDateType)*4);
	if (psl->array == NULL)
	{
		perror("malloc fail");
		return;
	}
	psl->size = 0;
	psl->capacity = 4;
}

void CheckCapacity(SeqList* psl)
{
	assert(psl);
	if (psl->size == psl->capacity)
	{
		SLDateType* tmp = (SLDateType*)realloc(psl->array, sizeof(SLDateType) * psl->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		psl->array = tmp;
		psl->capacity *= 2;
	}
}

//˳����β��
void SeqListPushBack(SeqList* psl, SLDateType x)
{
	assert(psl);
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}

//˳����βɾ
void SeqListPopBack(SeqList* psl)
{
	assert(psl);
	assert(psl->size > 0);
	psl->size--;
}

//˳����ͷ��
void SeqListPushFront(SeqList* psl,SLDateType x)
{
	assert(psl);
	CheckCapacity(psl);
	int end = psl->size-1;
	while (end>=0)
	{
		psl->array[end+1] = psl->array[end];
		end--;
	}
	psl->array[0] = x;
	psl->size++;
}

//˳����ͷɾ
void SeqListPopFront(SeqList* psl)
{
	assert(psl);
	assert(psl->size > 0);
	int start = 0;
	while (start<psl->size-1)
	{
		psl->array[start] = psl->array[start + 1];
		start++;
	}
	psl->size--;
}

//˳���Ĳ���
int SeqListFind(SeqList* psl, SLDateType x)
{
	assert(psl);
	int i = psl->size;
	int start = 0;
	while (i--)
	{
		if (psl->array[start] == x)
		{
			return start;
		}
		start++;
	}
	return -1;
}

// ˳�����posλ�ò���x
void SeqListInsert(SeqList* psl, size_t pos, SLDateType x)
{
	assert(psl);
	assert(0 <= pos && pos <= psl->size);
	CheckCapacity(psl);
	int i = psl->size - pos;
	int end = psl->size-1;
	while (i--)
	{
		psl->array[end + 1] = psl->array[end];
		end--;
	}
	psl->array[pos] = x;
	psl->size++;
}

// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* psl, size_t pos)
{
	assert(psl);
	assert(psl->size > 0);
	assert(0 <= pos && pos < psl->size);
	int start = pos + 1;
	int i = psl->size - pos-1;
	while (i--)
	{
		psl->array[start - 1] = psl->array[start];
		start++;
	}
	psl->size--;
}

// ˳�������
void SeqListDestory(SeqList* psl)
{
	assert(psl);
	free(psl->array);
	psl->array = NULL;
	psl->capacity = 0;
	psl->size = 0;
}

// ˳����ӡ
void SeqListPrint(SeqList* psl)
{
	assert(psl);
	int i = psl->size;
	int start = 0;
	while (i--)
	{
		printf("%d ", psl->array[start]);
		start++;
	}
	printf("\n");
}
