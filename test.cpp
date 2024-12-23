#define _CRT_SECURE_NO_WARNINGS 

//#include "test.h"
//#include "test1.h"
////
////void TestSeqList1()
////{
////	SeqList s;
////	SeqListInit(&s);
////	SeqListPushBack(&s, 1);
////	SeqListPushBack(&s, 2);
////	SeqListPushBack(&s, 3);
////	SeqListPushBack(&s, 4);
////	SeqListPushBack(&s, 5);
////	SeqListPushBack(&s, 6);
////	SeqListPushBack(&s, 6);
////	SeqListPushBack(&s, 6);
////	SeqListPushBack(&s, 6);
////	SeqListPrint(&s);
////
////	SeqListDestory(&s);
////}
////
////void TestSeqList2()
////{
////	SeqList s;
////	SeqListInit(&s);
////	SeqListPushBack(&s, 1);
////	SeqListPushBack(&s, 2);
////	SeqListPushBack(&s, 3);
////	SeqListPushBack(&s, 4);
////	SeqListPushFront(&s, 5);
////	SeqListPushFront(&s, 6);
////	SeqListPushFront(&s, 6);
////	SeqListPushFront(&s, 7);
////	SeqListPushFront(&s, 6);
////	SeqListPrint(&s);
////
////	SeqListDestory(&s);
////}
////
////void TestSeqList3()
////{
////	SeqList s;
////	SeqListInit(&s);
////	SeqListPushBack(&s, 1);
////	SeqListPushBack(&s, 2);
////	SeqListPushBack(&s, 3);
////	SeqListPushBack(&s, 4);
////	SeqListPushFront(&s, 5);
////	SeqListPushFront(&s, 6);
////	SeqListPrint(&s);
////
////	SeqListPopBack(&s);
////	SeqListPopBack(&s);
////	SeqListPrint(&s);
////
////	SeqListPopBack(&s);
////	SeqListPopBack(&s);
////	SeqListPrint(&s);
////
////	SeqListPopBack(&s);
////	SeqListPopBack(&s);
////	//SeqListPopBack(&s);
////	SeqListPrint(&s);
////
////	SeqListPushBack(&s, 1);
////	SeqListPushBack(&s, 2);
////	SeqListPushBack(&s, 3);
////	SeqListPushBack(&s, 4);
////	SeqListPrint(&s);
////
////	SeqListDestory(&s);
////}
////
////void TestSeqList4()
////{
////	SeqList s;
////	SeqListInit(&s);
////	SeqListPushBack(&s, 1);
////	SeqListPushBack(&s, 2);
////	SeqListPushBack(&s, 3);
////	SeqListPushBack(&s, 4);
////	SeqListPrint(&s);
////
////	SeqListPopFront(&s);
////	SeqListPopFront(&s);
////	SeqListPrint(&s);
////
////	SeqListPopFront(&s);
////	SeqListPopFront(&s);
////	SeqListPrint(&s);
////
////	//SLPopFront(&s);
////	//SLPopFront(&s);
////	//SLPrint(&s);
////
////	SeqListDestory(&s);
////}
////
////void TestSeqList5()
////{
////	SeqList s;
////	SeqListInit(&s);
////	SeqListPushBack(&s, 1);
////	SeqListPushBack(&s, 2);
////	SeqListPushBack(&s, 3);
////	SeqListPushBack(&s, 4);
////	SeqListPushBack(&s, 5);
////	SeqListPushBack(&s, 6);
////	SeqListPrint(&s);
////
////	SeqListInsert(&s, 2, 30);
////	SeqListPrint(&s);
////
////	//SLInsert(&s, 20, 30);
////	//SLPrint(&s);
////
////	//SLInsert(&s, -20, 30);
////	//SLPrint(&s);
////
////	SeqListErase(&s, 3);
////	SeqListPrint(&s);
////
////	SeqListPopFront(&s);
////	SeqListPrint(&s);
////
////	SeqListPopBack(&s);
////	SeqListPrint(&s);
////
////	SeqListDestory(&s);
////}
//////
////void TestSeqList6()
////{
////	SeqList s;
////	SeqListInit(&s);
////	SeqListPushBack(&s, 1);
////	SeqListPushBack(&s, 2);
////	SeqListPushBack(&s, 3);
////	SeqListPushBack(&s, 4);
////	SeqListPushBack(&s, 5);
////	SeqListPushBack(&s, 6);
////	SeqListPrint(&s);
////
////	int pos = SeqListFind(&s, 6);
////	if (pos != -1)
////	{
////		SeqListErase(&s, pos);
////	}
////	SeqListPrint(&s);
////
////	SeqListDestory(&s);
////}
////
////void TestSeqList7()
////{
////	SeqList* s = NULL;
////	SeqListPushBack(s, 1);
////	SeqListPushBack(s, 2);
////	SeqListPushBack(s, 3);
////	SeqListPrint(s);
////
////	SeqListDestory(s);
////}
////
////int main()
////{
////	//TestSeqList1();
////	/*TestSeqList2();*/
////	//TestSeqList3();
////	/*TestSeqList4();*/
////	/*TestSeqList5();*/
////	/*TestSeqList6();*/
////	TestSeqList7();
////	return 0;
////}
//void TestSList1()
//{
//	SListNode* plist = NULL;
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//
//	/*plist = SLPushFront(plist, 1);
//	plist = SLPushFront(plist, 2);
//	plist = SLPushFront(plist, 3);
//	plist = SLPushFront(plist, 4);*/
//
//	SListPrint(plist);
//
//	SListPushBack(&plist, 5);
//	SListPrint(plist);
//}
//
//void TestSList2()
//{
//	SListNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPrint(plist);
//
//	SListPopBack(&plist);
//	SListPrint(plist);
//	SListPopBack(&plist);
//	SListPrint(plist);
//	SListPopBack(&plist);
//	SListPrint(plist);
//	SListPopBack(&plist);
//	SListPrint(plist);
//
//	//SLPopBack(&plist);
//}
//
//void TestSList3()
//{
//	SListNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPrint(plist);
//
//	SListNode* pos = SListFind(plist, 3);
//	if (pos)
//		pos->date = 30;
//	SListPrint(plist);
//}
//
//
//void TestSList4()
//{
//	SListNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//	SListPrint(plist);
//
//	SListNode* pos = SListFind(plist, 3);
//	if (pos)
//	{
//		SListInsert(&plist, pos, 30);
//	}
//	SListPrint(plist);
//
//	pos = SListFind(plist, 2);
//	if (pos)
//	{
//		SListInsertAfter(pos, 20);
//	}
//	SListPrint(plist);
//
//	pos = SListFind(plist, 2);
//	if (pos)
//	{
//		SListErase(&plist, pos);
//	}
//	SListPrint(plist);
//}
//
////int main()
////{
////	TestSList4();
////
////	return 0;
////}
//
//
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//
//
////struct SListNode* removeElements(struct SListNode* head, int val)
////{
////	struct SListNode* prev = NULL, * cur = head;
////	while (cur)
////	{
////		if (cur->date == val)
////		{
////			prev->next = cur->next;
////			free(cur);
////			cur = prev->next;
////		}
////		else
////		{
////			prev = cur;
////			cur = cur->next;
////		}
////	}
////
////	return head;
////}
//
//int main()
//{
//	/*struct SListNode* n1 = (struct SListNode*)malloc(sizeof(struct SListNode));
//	assert(n1);
//	struct SListNode* n2 = (struct SListNode*)malloc(sizeof(struct SListNode));
//	assert(n2);
//	struct SListNode* n3 = (struct SListNode*)malloc(sizeof(struct SListNode));
//	assert(n3);
//	struct SListNode* n4 = (struct SListNode*)malloc(sizeof(struct SListNode));
//	assert(n4);
//	n1->date = 7;
//	n2->date = 7;
//	n3->date = 7;
//	n4->date = 7;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = NULL;*/
//
//	/*n1 = removeElements(n1, 7);*/
//	//TestSList1();
//	 //TestSList2();
//	//TestSList3();
//	TestSList4();
//
//	return 0;
//}
//#include "test2.h"
//
//void TestList1()
//{
//	LTNode* plist = Init();
//	LTPushBack(plist, 1);
//	LTPushBack(plist, 2);
//	LTPushBack(plist, 3);
//	LTPushBack(plist, 4);
//
//	LTPrint(plist);
//
//	LTPopBack(plist);
//	LTPrint(plist);
//
//	LTPopBack(plist);
//	LTPrint(plist);
//
//	LTPopBack(plist);
//	LTPrint(plist);
//
//	LTPopBack(plist);
//	LTPrint(plist);
//
//	//LTPopBack(plist);
//	//LTPrint(plist);
//
//	LTDestroy(plist);
//	plist = NULL;
//}
//
//void TestList2()
//{
//	LTNode* plist = Init();
//	LTPushFront(plist, 1);
//	LTPushFront(plist, 2);
//	LTPushFront(plist, 3);
//	LTPushFront(plist, 4);
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//
//	/*LTPopFront(plist);
//	LTPrint(plist);*/
//
//	LTDestroy(plist);
//	plist = NULL;
//}
//
//void TestList3()
//{
//	LTNode* plist = Init();
//	LTPushFront(plist, 1);
//	LTPushFront(plist, 2);
//	LTPushFront(plist, 3);
//	LTPushFront(plist, 4);
//	LTPrint(plist);
//
//	LTNode* pos = LTFind(plist, 3);
//	if (pos)
//	{
//		LTInsert(pos, 30);
//	}
//	LTPrint(plist);
//
//	LTDestroy(plist);
//	plist = NULL;
//}
//
//int main()
//{
//	TestList3();
//
//	return 0;
//}

//#include"Stack.h"
//
//void TestStack1()
//{
//	ST st;
//	STInit(&st);
//	STPush(&st, 1);
//	STPush(&st, 2);
//	printf("%d ", STTop(&st));
//	STPop(&st);
//
//	STPush(&st, 3);
//	STPush(&st, 4);
//	while (!STEmpty(&st))
//	{
//		printf("%d ", STTop(&st));
//		STPop(&st);
//	}
//
//	STDestroy(&st);
//}
//
//int main()
//{
//	TestStack1();
//
//	return 0;
//}


//#include"Queue.h"
//void TestQueue()
//{
//	QNode* phead = NULL;
//	QNode* ptail = NULL;
//	int size = 0;
//
//}
//
//int main()
//{
//
//	return 0;
//}
#include"Heap.h"

//int main()
//{
//	HP hp;
//	HeapInit(&hp);
//	int a[] = { 65,100,70,32,50,60 };
//	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	// 10:42继续
//	while (!HeapEmpty(&hp))
//	{
//		int top = HeapTop(&hp);
//		printf("%d\n", top);
//		HeapPop(&hp);
//	}
//
//	return 0;
//}

//void HeapSort(int* a, int n)
//{
//	// 升序 -- 建大堆
//	// 降序 -- 建小堆
//
//
//	// 建堆--向上调整建堆
//	for (int i = 1; i < n; i++)
//	{
//		AdjustUp(a, i);
//	}
//
//	// 建堆--向下调整建堆 --O(N)
//	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
//	{
//		AdjustDown(a, n, i);
//	}
//
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&a[0], &a[end]);
//
//		// 再调整，选出次小的数
//		AdjustDown(a, end, 0);
//
//		--end;
//	}
//}
//
//int main()
//{
//	int a[] = { 7,8,3,5,1,9,5,4 };
//	HeapSort(a, sizeof(a) / sizeof(int));
//
//	return 0;
//}

//void CreateNDate()
//{
//	//造数据
//	int n = 1000;
//	srand(time(0));
//	const char* file = "data.txt";
//	FILE* fin = fopen(file, "w");
//	if (fin == NULL)
//	{
//		perror("fopen error");
//		return;
//	}
//
//	for (size_t i = 0;i < n;i++)
//	{
//		int x = rand() % 1000000;
//		fprintf(fin, "%d\n", x);
//	}
//	fclose(fin);
//}
//
//void PrintTopK(int k)
//{
//	const char* file = "data.txt";
//	FILE* fout = fopen(file, "r");
//	if (fout == NULL)
//	{
//		perror("fout fail");
//		return;
//	}
//	int* kminheap = (int*)malloc(sizeof(int) * k);
//	if (kminheap == NULL)
//	{
//		perror("malloc fail");
//		return;
//	}
//	for (int i = 0;i < k;i++)
//	{
//		fscanf(fout, "%d", &kminheap[i]);
//	}
//
//	//建小堆
//	for (int i = (k - 1 - 1) / 2;i >= 0;i--)
//	{
//		AdjustDown(kminheap, k, i);
//	}
//
//	int val = 0;
//	while (!feof(fout))
//	{
//		fscanf(fout, "%d", &val);
//		if (val > kminheap[0])
//		{
//			kminheap[0] = val;
//			AdjustDown(kminheap, k, 0);
//		}
//	}
//	for (int i = 0;i < k;i++)
//	{
//		printf("%d ", kminheap[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//CreateNDate();
//	PrintTopK(5);
//
//	return 0;
//}

//// 二叉树前序遍历
//void PreOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		printf("N ");
//		return;
//	}
//	printf("%d ", root->data);
//	PreOrder(root->left);
//	PreOrder(root->right);
//}
//// 二叉树中序遍历
//void InOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		printf("N ");
//		return;
//	}
//	PreOrder(root->left);
//	printf("%d ", root->data);
//	PreOrder(root->right);
//}
//// 二叉树后序遍历
//void PostOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		printf("N ");
//		return;
//	}
//	
//	PreOrder(root->left);
//	PreOrder(root->right);
//	printf("%d ", root->data);
//}
//void LevelOrder(BTNode* root)
//{
//	Queue q;
//	QueueInit(&q);
//	if (root)
//	{
//		QueuePush(&q, root);
//	}
//	while (!QueueEmpty(&q))
//	{
//		BTNode* front = QueueFront(&q);
//		QueuePop(&q);
//		printf("%d ", front->data);
//		if (root->left)
//		{
//			QueuePush(&q, root->left);
//		}
//		if (root->right)
//		{
//			QueuePush(&q, root->right);
//		}
//	}
//	printf("\n");
//	QueueDestroy(&q);
//}

//// 二叉树节点个数
//int BinaryTreeSize(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
//}
//// 二叉树叶子节点个数
//int BinaryTreeLeafSize(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (root->left == NULL && root->right = NULL)
//	{
//		return 1;
//	}
//	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right);
//}
////二叉树的高度
//int BTreeHeight(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	int LeftHeight = BTreeHeight(root->left);
//	int RightHeight = BTreeHeight(root->right);
//	return LeftHeight > RightHeight ? LeftHeight + 1 : RightHeight + 1;
//}
//
//// 二叉树第k层节点个数
//int BinaryTreeLevelKSize(BTNode* root, int k)
//{
//	assert(k > 0);
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (k == 1)
//	{
//		return 1;
//	}
//	return BinaryTreeLevelKSize(root->left,k-1) + BinaryTreeLeafSize(root->right,k-1);
//}
//// 二叉树查找值为x的节点
//BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	if (root->val == x)
//	{
//		return root;
//	}
//	BTNode* ret1=BinaryTreeFind(root->left, x);
//	if (ret1)
//	{
//		return ret1;
//	}
//	BTNode* ret2=BinaryTreeFind(root->right, x);
//	if (ret2)
//	{
//		return ret2;
//	}
//	return NULL;
//}

//#include"Sort.h"
//#include<time.h>
//
//void TestInsertSort()
//{
//	//int a[] = { 4,7,1,9,3,4,5,8,3,2 };
//	int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	PrintArray(a, sizeof(a) / sizeof(int));
//	InsertSort(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//void TestBubbleSort()
//{
//	int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	PrintArray(a, sizeof(a) / sizeof(int));
//	BubbleSort(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//void TestSelectSort()
//{
//	//int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	int a[] = { 9,7,1,3,3,0,5,8,3,2,3 };
//	PrintArray(a, sizeof(a) / sizeof(int));
//	SelectSort(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//void TestShellSort()
//{
//	int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	PrintArray(a, sizeof(a) / sizeof(int));
//	InsertSort(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//
//	ShellSort(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//void TestHeapSort()
//{
//	int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	PrintArray(a, sizeof(a) / sizeof(int));
//	HeapSort(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//void TestQuickSort()
//{
//	//int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	//int a[] = { 6,1,2,7,9,3,4,5,10,8 };
//	int a[] = { 6, 1, 6, 7, 9, 6, 4, 5, 6, 8 };
//
//
//	PrintArray(a, sizeof(a) / sizeof(int));
//	//QuickSort(a, 0, sizeof(a) / sizeof(int)-1);
//	QuickSortNonR(a, 0, sizeof(a) / sizeof(int) - 1);
//
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//void TestMergeSort()
//{
//	//int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	//int a[] = { 6,1,2,7,9,3,4,5,10,8 };
//	int a[] = { 10,6,7,1,3,9,4,2,7,5 };
//
//	PrintArray(a, sizeof(a) / sizeof(int));
//	MergeSortNonR(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//void TestCountSort()
//{
//	//int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	//int a[] = { 6,1,2,7,9,3,4,5,10,8 };
//	int a[] = { 6, 1, 6, 7, 9, 6, 4, 5, 6, 8 };
//
//
//	PrintArray(a, sizeof(a) / sizeof(int));
//	CountSort(a, sizeof(a) / sizeof(int));
//
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//void TestOP()
//{
//	srand(time(0));
//	const int N = 1000000;
//	int* a1 = (int*)malloc(sizeof(int) * N);
//	int* a2 = (int*)malloc(sizeof(int) * N);
//	int* a3 = (int*)malloc(sizeof(int) * N);
//	int* a4 = (int*)malloc(sizeof(int) * N);
//	int* a5 = (int*)malloc(sizeof(int) * N);
//	int* a6 = (int*)malloc(sizeof(int) * N);
//	int* a7 = (int*)malloc(sizeof(int) * N);
//	int* a8 = (int*)malloc(sizeof(int) * N);
//
//
//	for (int i = 0; i < N; ++i)
//	{
//		a1[i] = rand();
//		a2[i] = a1[i];
//		a3[i] = a1[i];
//		a4[i] = a1[i];
//		a5[i] = a1[i];
//		a6[i] = a1[i];
//		a7[i] = a1[i];
//		a8[i] = a1[i];
//
//	}
//
//	int begin1 = clock();
//	//InsertSort(a1, N);
//	int end1 = clock();
//
//	int begin2 = clock();
//	ShellSort(a2, N);
//	int end2 = clock();
//
//	int begin3 = clock();
//	//BubbleSort(a3, N);
//	int end3 = clock();
//
//	int begin4 = clock();
//	//SelectSort(a4, N);
//	int end4 = clock();
//
//	int begin5 = clock();
//	HeapSort(a5, N);
//	int end5 = clock();
//
//	int begin6 = clock();
//	QuickSort(a6, 0, N - 1);
//	int end6 = clock();
//
//	int begin7 = clock();
//	MergeSort(a7, N);
//	int end7 = clock();
//
//	int begin8 = clock();
//	CountSort(a8, N);
//	int end8 = clock();
//
//	printf("InsertSort:%d\n", end1 - begin1);
//	printf("ShellSort:%d\n", end2 - begin2);
//	printf("BubbleSort:%d\n", end3 - begin3);
//	printf("SelcetSort:%d\n", end4 - begin4);
//	printf("HeapSort:%d\n", end5 - begin5);
//	printf("QuickSort:%d\n", end6 - begin6);
//	printf("MergeSort:%d\n", end7 - begin7);
//	printf("CountSort:%d\n", end8 - begin8);
//
//	free(a1);
//	free(a2);
//	free(a3);
//	free(a4);
//	free(a5);
//	free(a6);
//	free(a7);
//	free(a8);
//
//}
//
//int main()
//{
//	TestInsertSort();
//	//TestShellSort();
//	//TestBubbleSort();
//	//TestSelectSort();
//	//TestHeapSort();
//	//TestQuickSort();
//	//TestMergeSort();
//	//TestCountSort();
//
//	//TestOP();
//
//	return 0;
//}

//#include"Date.h"
//
//void TestDate1()
//{
//	Date d1(2023, 7, 23);
//	Date d2;
//
//	d1.Print();
//	d2.Print();
//
//	Date d3(2010, 2, 29);
//	d3.Print();
//
//	Date d4(2023, 13, 29);
//	d4.Print();
//}
//
//void TestDate2()
//{
//	Date d1(2023, 8, 6);
//	// 拷贝构造，一个已经存在的对象去初始化另一个要创建对象
//	Date d2(d1);
//
//	d1.Print();
//	d2.Print();
//
//	Date d3(2023, 8, 13);
//	// 赋值，两个已经存在对象进行拷贝
//	//d1 = d3;  // d1.operator=(d3)
//	d1 = d2 = d3;
//	d1.Print();
//	d2.Print();
//	d3.Print();
//
//	d1 = d1;
//
//	int i, j;
//	i = j = 10;
//	cout << (j = 10) << endl;
//}
//
//void TestDate3()
//{
//	Date d1(2023, 7, 27);
//	d1 += 20000;
//	d1.Print();
//
//	Date d2(2023, 7, 27);
//	//Date ret = d2;
//	//Date ret(d2 + 20000);
//	// 拷贝构造
//	//Date ret = d2 + 20000;
//
//	Date ret;
//	// 赋值
//	ret = d2 + 20000;
//
//	ret.Print();
//}
//
//void TestDate4()
//{
//	Date d1(2023, 7, 27);
//	d1 -= 20000;
//	d1.Print();
//
//	Date d2(2023, 7, 27);
//	d2 += -200;
//	d2.Print();
//
//	Date d3(2023, 7, 27);
//	d3 -= -200;
//	d3.Print();
//}
//
//void TestDate5()
//{
//	Date d1(2023, 7, 27);
//	Date ret1 = d1++;
//	//Date ret1 = d1.operator++(0);
//	ret1.Print();
//	d1.Print();
//
//	Date ret2 = ++d1;
//	//Date ret2 = d1.operator++();
//	ret2.Print();
//	d1.Print();
//}
//
//void TestDate6()
//{
//	Date d1(2023, 7, 27);
//	Date d2(2003, 1, 1);
//
//	cout << d1 - d2 << endl;
//}
//
//void TestDate7()
//{
//	const Date d1(2023, 7, 27);
//	// d1.Print(&d1);
//	d1.Print();
//
//	Date d2(2023, 7, 27);
//	// d2.Print(&d2);
//	d2.Print();
//}
//
//int main()
//{
//	TestDate7();
//
//	return 0;
//}

//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 3)
//	{
//		cout << "Stack()" << endl;
//
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (NULL == _array)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	// s1(s)
//	Stack(const Stack& s)
//	{
//		cout << "Stack(Stack& s)" << endl;
//		// 深拷贝
//		_array = (DataType*)malloc(sizeof(DataType) * s._capacity);
//		if (NULL == _array)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//
//		memcpy(_array, s._array, sizeof(DataType) * s._size);
//		_size = s._size;
//		_capacity = s._capacity;
//	}
//
//	Stack& operator=(const Stack& st)
//	{
//		if (this != &st)
//		{
//			// ...
//		}
//
//		return *this;
//	}
//
//	void Push(DataType data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//
//		free(_array);
//		_array = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	// 内置类型
//	DataType* _array;
//	int _capacity;
//	int _size;
//};

//class MyQueue
//{
//	// 构造析构
//	// 拷贝构造和赋值重写
//	// 都不需要写，默认生成的就可以用
//	Stack _st1;
//	Stack _st2;
//};

//void Func1(const Stack& st)
//{
//
//}
//
//Stack& Func2()
//{
//	Stack st;
//	return st;
//}
//
//int main()
//{
//	Stack st1;
//	Func1(st1);
//
//	Stack st2 = Func2();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	Time(int hour = 0)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//		int _hour;
//};
//class Date
//{
//public:
//	Date(int day)
//	{}
//private:
//	int _day;
//	Time _t;
//};
//int main()
//{
//	Date d(1);
//}

//#include<iostream>
//using namespace std;
//#include<string>
////////////////////////////////////////////////////////////////////////////
////测试string容量相关的接口
////size/clear/resize
//void Teststring1()
//{
//	//注意：string类对象支持直接用cin和cout进行输入和输出
//	string s("helle,ljh !");
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	//将s中的字符串清空，注意清空时只是将size清0，不改变底层空间的大小
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//将s中有效字符个数增加到10个，多出位置yon‘a’进行填充
//	//"aaaaaaaaaa"
//	s.resize(10, 'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//将s中有效字符个数增加到15个，多出位置用缺省值'\0'进行填充
//	//“aaaaaaaaaa\0\0\0\0\0”
//	//注意此时s中有效字符个数已经增加到15个
//	s.resize(15);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	//将s中的有效字符个数缩小到5个
//	s.resize(5);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//}
/////////////////////////////////////////////////////////////////////
//void Teststring2()
//{
//	string s;
//	//测试reserve是否会改变string中有效元素个数
//	s.reserve(100);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	//测试reserve参数小于string的底层空间大小时，是否会将空间缩小
//	s.reserve(50);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
////////////////////////////////////////////////////////////////////
////利用reserve提高插入数组的效率,避免增容带来的开销
//void TestPushBack()
//{
//	string s;
//	size_t sz = s.capacity();
//	cout << "making s grow:\n" << endl;
//	for (int i = 0;i < 100;i++)
//	{
//		s.push_back('a');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed" << sz << endl;
//		}
//	}
//}
//
////构建string时,如果提前已经知道string中大概要放多少个元素,可提前将string中空间设置好
//void TestPushBackReserve()
//{
//	string s;
//	s.reserve(100);
//	size_t sz = s.capacity();
//
//	cout << "making s grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		s.push_back('a');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}
///////////////////////////////////////////////////////////////////////////
////string的遍历
////begin()+end() for+[] 范围for
////注意:string遍历时使用最多的还是for+下标或者范围for(C++11后才支持)
////begin()+end()大多数使用在需要使用STL提供的算法操作string时，比如：采用reverse逆置string
//void Teststring3()
//{
//	string s1("hello ljh");
//	const string s2("Hello ljh");
//	cout << s1 << " " << s2 << endl;
//	cout << s1[0] << " " << s2[0] << endl;
//
//	s1[0] = 'H';
//	cout << s1 << endl;
//	//s2[0]='h';代码编译失败，因为const类型对象不能修改
//}
//
//void Teststring4()
//{
//	string s("hello ljh");
//	//3种遍历方式：
//	// 需要注意的以下三种方式除了遍历string对象，还可以遍历是修改string中的字符，
//	// 另外以下三种方式对于string而言，第一种使用最多
//	//1.for+operator[]
//	for (size_t i = 0;i < s.size();i++)
//	{
//		cout << s[i] << endl;
//	}
//	//2.迭代器
//	string::iterator it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it << endl;
//		++it;
//	}
//
//	//string::reverse_iterator rit=s.rbegin();
//	//C++11之后，直接使用auto定义迭代器，让编译器推到迭代器的类型
//	auto rit = s.rbegin();
//	while (rit != s.rend())
//	{
//		cout << *rit << endl;
//		rit++;
//	}
//	//范围for
//	for (auto ch : s)
//	{
//		cout << ch << endl;
//	}
//}
//
////////////////////////////////////////////////////////////////////////////////////
////测试string：
////1.插入（拼接）方式：push_back append aperator+=
////2.正向和反向查找：find()+rfind()
////3.截取字串:substr()
////4.删除：erase
//void Teststring5()
//{
//	string str;
//	str.push_back(' ');   // 在str后插入空格
//	str.append("hello");  // 在str后追加一个字符"hello"
//	str += 'b';           // 在str后追加一个字符'b'   
//	str += "it";          // 在str后追加一个字符串"it"
//	cout << str << endl;
//	cout << str.c_str() << endl;   // 以C语言的方式打印字符串
//
//	//获取file的后缀
//	string file("string.cpp");
//	size_t pos = file.rfind('.');
//	string suffix(file.substr(pos, file.size() - pos));
//	cout << suffix << endl;
//
//	// npos是string里面的一个静态成员变量
//	// static const size_t npos = -1;
//
//	//取出url中的域名
//	string url("http://www.cplusplus.com/reference/string/string/find/");
//	cout << url << endl;
//	size_t start = url.find("://");
//	if (start == string::npos)
//	{
//		cout << "invalid url" << endl;
//		return;
//	}
//	start += 3;
//	size_t finish = url.find('/', start);
//	string address = url.substr(start, finish - start);
//	cout << address << endl;
//	// 删除url的协议前缀
//	pos = url.find("://");
//	url.erase(0, pos + 3);
//	cout << url << endl;
//}
//
//int main()
//{
//	Teststring5();
//	return 0;
//}

//#include"string.h"
//int main()
//{
//	/*string s1("xxxxxxxxxxxxxxxxxxxxxxxxxxx");
//	string s2(s1);
//	cout << (void*)s1.c_str() << endl;
//	cout << (void*)s2.c_str() << endl;*/
//	//ljh::test_string1();
//	//ljh::test_string2();
//	//ljh::test_string3();
//	//ljh::test_string4();
//	//ljh::test_string5();
//	//ljh::test_string6();
//	//ljh::test_string7();
//	//ljh::test_string8();
//	//ljh::test_string9();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
//
////////////////////////////////////////////////////////////////////////////////////////
////vector构造
//int TestVector1()
//{
//	vector<int> first;//无参的构造
//	vector<int> second(4, 100);//构造一个vector，里有4个int值为100
//	vector<int> third(second.begin(), second.end());//迭代器区间初始化
//	vector<int> fourth(third);//拷贝构造
//	int myints[] = { 16, 2, 77, 29 };
//	vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
//	cout << "The contents of fifth are:";
//	for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
//	{
//		cout << ' ' << *it;
//	}
//	cout << '\n';
//	return 0;
//}
//
/////////////////////////////////////////////////////////////////////////////////////////
////vector迭代器
//void PrintVector(const vector<int>& v)
//{
//	//const 对象使用const迭代器进行遍历打印
//	vector<int>::const_iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
//
//void TestVector2()
//{
//	//使用push_back插入4个数据
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	//使用迭代器进行遍历打印
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//使用迭代器进行修改
//	it = v.begin();
//	while (it != v.end())
//	{
//		*it *= 2;
//		++it;
//	}
//
//	//使用反向迭代器进行遍历再打印
//	//vector<int>::reverse_iterator rit=v.begin();
//	auto rit = v.rbegin();
//	while (rit != v.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//	PrintVector(v);
//}
//
///////////////////////////////////////////////////////////////////////////
////vector的resize和reserve
////resize(size_t n,const T& data = T() )
////将有效元素个数设置为n个，如果增多时，增多的元素使用data进行填充
////注意：resize在增多元素个数时可能会扩容
//void TestVector3()
//{
//	vector<int> v;
//
//	//set some initial contest
//	for (int i = 0;i < 10;i++)
//	{
//		v.push_back(i);
//	}
//	v.resize(5);
//	v.resize(8, 100);
//	v.resize(12);
//	cout << "v contains";
//	for (size_t i = 0;i, v.size();i++)
//	{
//		cout << ' ' << v[i];
//	}
//	cout << "\n";
//}
//
//
////测试vector的默认扩容机制
////vs :按照1.5倍方式扩容
////linux:按照2被的方式进行扩容
//void TestVectorExpand()
//{
//	size_t sz;
//	vector<int> v;
//	sz = v.capacity();
//	cout << "making v grow:\n";
//	for (int i = 0;i < 100;i++)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << "capacity changed:" << sz << "\n";
//		}
//	}
//}
//
//
////往vector中插入元素时，如果大概已经知道要存放多少个元素
////可以通过reserve方法提前将容量设置好,避免边插入边扩容效率低
//void TestVectorExpandOP()
//{
//	vector<int> v;
//	size_t sz = v.capacity();
//	v.reserve(100);//提前将容量设置好，可以避免一遍插入一边扩容
//	cout << " making bar grow\n";
//	for (int i = 0;i < 100;i++)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << "capacity changed:" << sz << "\n";
//		}
//	}
//}
//
//////////////////////////////////////////////////////////////
////vector的增删查改
////尾插和尾删：push_back/pop_back
//void TestVector4()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	auto it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	v.pop_back();
//	v.pop_back();
//
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
//
////任意位置插入:insert和erase,以及查找find
////注意find不是vector自身提供的方法,时STL提供的算法
//void TestVector5()
//{
//	//使用列表方式初始化，C++11新语法
//	vector<int> v{ 1,2,3,4 };
//
//	//在指定位置前插入值为val的元素，比如3之前插入30，如果没有则不插入
//	//1.先使用find查找3所在位置
//	//注意vector没有提供find方法，如果要查找只能使用STL提供的全局find
//	auto pos = find(v.begin(), v.end(), 3);
//	if (pos != v.end())
//	{
//		//2.在pos位置之前插入30
//		v.insert(pos, 30);
//	}
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	pos = find(v.begin(), v.end(), 3);
//	//删除pos位置的数据
//	v.erase(pos);
//
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
//
////operator[]+index和C++11中vector的新式for+auto的遍历
////vector使用这两种遍历方式是比较便捷的。
//
//void TestVector6()
//{
//	vector<int> v{ 1,2,3,4 };
//
//	//通过[]读写第0个位置。
//	v[0] = 10;
//	cout << v[0] << endl;
//
//	//1.使用for+[]下标方式遍历
//	for (size_t i = 0;i < v.size();i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//
//	vector<int> swapv;
//	swapv.swap(v);
//
//	cout << "v data:";
//	for (size_t i = 0;i < v.size();i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//
//	//2.使用迭代器遍历
//	cout << "swapv data:";
//	auto it = swapv.begin();
//	while (it != swapv.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//
//	// 3. 使用范围for遍历
//	for (auto x : v)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//}

//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//#include "vector.h"
//void test_vector1()
//{
//	vector<int> v1;
//	vector<int> v2(10, 0);
//
//	vector<int> v3(v2.begin(), v2.end());
//	string str("hello world");
//	vector<int> v4(str.begin(), str.end());
//	vector<int> v5(v4);
//
//	for (size_t i = 0; i < v3.size(); i++)
//	{
//		cout << v3[i] << " ";
//	}
//	cout << endl;
//
//	//vector<int>::iterator it = v4.begin();
//	auto it = v4.begin();
//	while (it != v4.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	for (auto e : v5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//void test_vector2()
//{
//	size_t sz;
//	vector<int> v;
//	v.reserve(100);
//	sz = v.capacity();
//	cout << "making v grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}
//
//void test_vector3()
//{
//	vector<int> v1;
//	cout << v1.max_size() << endl;
//
//	vector<int> v;
//	//v.reserve(100);  // size = 0    capacity 100
//	v.resize(100);     // size = 100  capacity 100
//
//	for (size_t i = 0; i < 100; i++)
//	{
//		v[i] = i;
//	}
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//void test_vector4()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.insert(v.begin(), 0);
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	auto it = find(v.begin(), v.end(), 3);
//	if (it != v.end())
//	{
//		v.insert(it, 30);
//	}
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	it = find(v.begin(), v.end(), 3);
//	if (it != v.end())
//	{
//		v.erase(it);
//	}
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	v.clear();
//	v.shrink_to_fit();
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//}
//
//int main()
//{
//	//test_vector4();
//
//	ljh::test_vector8();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<list>
//#include<vector>
//
//////////////////////////////////////////////////////////////////////
////list的构造
//void TestList1()
//{
//	list<int> l1;//构造空的l1
//	list<int> l2(4, 100);//l2中放4个值为100的元素
//	list<int> l3(l2.begin(), l2.end());//用l2的[begin(),end())左闭右开区间构造l3
//	list<int> l4(l3);//用l3拷贝构造l4
//
//	//以数组为迭代器区间构造l5
//	int array[] = { 16,2,77,29 };
//	list<int> l5(array, array + sizeof(array) / sizeof(int));
//
//	//列表格式初始化C++11
//	list<int> l6{ 1,2,3,4,5 };
//
//	//用迭代器方式打印l5中的元素
//	list<int>::iterator it = l5.begin();
//	while (it != l5.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//C++11范围for的方式遍历
//	for (auto& e : l5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
////////////////////////////////////////////////////////////////////
////list迭代器的使用
////注意：遍历链表只能用迭代器和范围for
//void PrintList(const list<int>& l)
//{
//	//注意这里调用的是list的begin（）const，返回list的const_iterator对象
//	for (list<int>::const_iterator it = l.begin();it != l.end();++it)
//	{
//		cout << *it << " ";
//		//*it=10;编译不通过
//	}
//	cout << endl;
//}
//
//void TestList2()
//{
//	int array[] = { 1,2,3,4,5,6,7,8,9,0 };
//	list<int> l(array, array + sizeof(array) / sizeof(int));
//	//使用正向迭代器正向list中的元素
//	//list<int>::iterator it=l.begin();//c++98语法
//	auto it = l.begin();//c++11之后推荐的写法
//	while (it != l.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//
//	//使用反向迭代器逆向打印list中的元素
//	//list<int>::reverse_iterator rit=l.rbegin()
//	auto rit = l.rbegin();
//	while (rit != l.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//}
//
////////////////////////////////////////////////////////////////////////////
////list 插入和删除
////push_back/pop_back/push_front/pop_front
//void TestList3()
//{
//	int array[] = { 1,2,3 };
//	list<int> L(array, array + sizeof(array) / sizeof(array[0]));
//
//	//在list的尾部插入4，头部插入0
//	L.push_back(4);
//	L.push_front(0);
//	PrintList(L);
//
//	//删除list尾部节点和头部节点
//	L.pop_back();
//	L.pop_front();
//	PrintList(L);
//}
//
////insert/erase
//void TestList4()
//{
//	int array1[] = { 1,2,3 };
//	list<int> L(array1, array1 + sizeof(array1) / sizeof(array1[0]));
//
//	//获取链表中第二个节点
//	auto pos = ++L.begin();
//	cout << *pos << endl;
//
//	//在pos前插入值为4的元素
//	L.insert(pos, 4);
//	PrintList(L);
//
//	//在pos前插入5个值为5的元素
//	L.insert(pos, 5, 5);
//	PrintList(L);
//
//	//在pos前插入[v.begin(),v.end()区间中的元素
//	vector<int> v{ 7,8,9 };
//	L.insert(pos, v.begin(), v.end());
//	PrintList(L);
//
//	//删除pos位置上的元素
//	L.erase(pos);
//	PrintList(L);
//
//	//删除list中[begin,end)区间中的元素，即删除list中的所有元素
//	L.erase(L.begin(), L.end());
//	PrintList(L);
//}
//
////resize/swap/clear
//void TestList5()
//{
//	//用数组来构造list
//	int array1[] = { 1,2,3 };
//	list<int> l1(array1, array1 + sizeof(array1) / sizeof(array1[0]));
//	PrintList(l1);
//
//	//交换l1和l2中的元素
//	list<int> l2;
//	l1.swap(l2);
//	PrintList(l1);
//	PrintList(l2);
//
//
//	//将l2中的元素清空
//	l2.clear();
//	cout << l2.size() << endl;
//}

//#include<iostream>
//#include<list>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//#include"list.h"
//
//void test_list1()
//{
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//	lt.push_back(5);
//
//	list<int>::iterator it = lt.begin();
//	while (it != lt.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//void test_list2()
//{
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//	lt.push_back(5);
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//lt.reverse();
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//sort(lt.begin(), lt.end());
//
//	//  < less
//	//lt.sort(); 
//	//  > greater
//	//greater<int> gt;
//	//lt.sort(gt);
//	lt.sort(greater<int>());
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//void test_op()
//{
//	srand(time(0));
//	const int N = 1000000;
//
//	list<int> lt1;
//	list<int> lt2;
//
//	for (int i = 0; i < N; ++i)
//	{
//		auto e = rand();
//		lt1.push_back(e);
//		lt2.push_back(e);
//	}
//
//	int begin1 = clock();
//	// vector
//
//	vector<int> v(lt2.begin(), lt2.end());
//	// 
//	sort(v.begin(), v.end());
//
//	// lt2
//	lt2.assign(v.begin(), v.end());
//
//	int end1 = clock();
//
//	int begin2 = clock();
//	lt1.sort();
//	int end2 = clock();
//
//	printf("list copy vector sort copy list sort:%d\n", end1 - begin1);
//	printf("list sort:%d\n", end2 - begin2);
//}
//
//void test_list4()
//{
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//	lt.push_back(3);
//	lt.push_back(3);
//	lt.push_back(3);
//	lt.push_back(5);
//	lt.push_back(5);
//	lt.push_back(3);
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	lt.sort();
//	lt.unique(); // ȥ
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//lt.remove(30);
//	lt.remove(3);
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//void test_list5()
//{
//	std::list<int> mylist1, mylist2;
//	std::list<int>::iterator it;
//
//	// set some initial values:
//	for (int i = 1; i <= 4; ++i)
//		mylist1.push_back(i);      // mylist1: 1 2 3 4
//
//	for (int i = 1; i <= 3; ++i)
//		mylist2.push_back(i * 10);   // mylist2: 10 20 30
//
//	it = mylist1.begin();
//	++it;                         // points to 2
//
//	for (auto e : mylist1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	for (auto e : mylist2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//mylist1.splice(it, mylist2); // mylist1: 1 10 20 30 2 3 4
//								  // mylist2 (empty)
//								  // "it" still points to 2 (the 5th element)
//
//	//mylist1.splice(it, mylist2, ++mylist2.begin()); // mylist1: 1 20 2 3 4
//
//	// 10:20
//	mylist1.splice(it, mylist2, ++mylist2.begin(), mylist2.end()); // mylist1: 1 20 30 2 3 4
//
//	for (auto e : mylist1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	for (auto e : mylist2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	//test_list5();
//
//	//test_op();
//
//
//	ljh::test_list4();
//
//	return 0;
//}

//#include"PriorityQueue.h"
//#include<iostream>
//#include<algorithm>
//void test_priority_queue()
//{
//    // 插入删除数据效率 logN
//    //bit::priority_queue<int> q; // 大堆
//    //bit::priority_queue<int, vector<int>, less<int>> q; // 大堆
//    ljh::priority_queue<int, vector<int>, greater<int>> q; // 小堆
//
//    q.push(3);
//    q.push(1);
//    q.push(5);
//    q.push(4);
//
//    //bit::priority_queue<int> copy(q);
//
//    while (!q.empty())
//    {
//        cout << q.top() << " ";
//        q.pop();
//    }
//    cout << endl;
//
//    int a[] = { 1,2,6,2,1,5,9,4 };
//    sort(a, a + 8, greater<int>());
//    //greater<int> gt;
//    //sort(a, a + 8, gt);
//}
//
//int main()
//{
//    test_priority_queue();
//    return 0;
//}

//#include<iostream>
//#include<list>
//#include<vector>
//#include<string>
//using namespace std;
//
//#include"list_copy.h"
//#include"vector_copy.h"
//
//
//void func(const ljh::list<int>& lt)
//{
//	ljh::list<int>::const_reverse_iterator rit = lt.rbegin();
//	while (rit != lt.rend())
//	{
//		//*rit += 1;
//
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//}
//
////int main()
////{
////	ljh::list<int> lt;
////	lt.push_back(1);
////	lt.push_back(2);
////	lt.push_back(3);
////	lt.push_back(4);
////	lt.push_back(5);
////
////	ljh::list<int>::iterator it = lt.begin();
////	while (it != lt.end())
////	{
////		cout << *it << " ";
////		++it;
////	}
////	cout << endl;
////
////	ljh::list<int>::reverse_iterator rit = lt.rbegin();
////	while (rit != lt.rend())
////	{
////		//*rit += 1;
////
////		cout << *rit << " ";
////		++rit;
////	}
////	cout << endl;
////
////	func(lt);
////
////	return 0;
////}
//
//void func(const ljh::vector<int>& lt)
//{
//	ljh::vector<int>::const_reverse_iterator rit = lt.rbegin();
//	while (rit != lt.rend())
//	{
//		//*rit += 1;
//
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	ljh::vector<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//	lt.push_back(5);
//
//	ljh::vector<int>::iterator it = lt.begin();
//	while (it != lt.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	ljh::vector<int>::reverse_iterator rit = lt.rbegin();
//	while (rit != lt.rend())
//	{
//		//*rit += 1;
//
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	func(lt);
//
//	return 0;
//}
//
//class Person
//{
//public:
//	Person(const char* name="peter")
//		:_name(name)
//	{
//		cout << "Person()" << endl;
//	}
//
//	Person(const Person& p)
//		:_name(p._name)
//	{
//		cout << "Person(const Person& p)" << endl;
//	}
//
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Perspn& p)" << endl;
//		if (this != &p)
//		{
//			_name = p._name;
//		}
//		return *this;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//
//protected:
//	string _name;//姓名
//};
//
//class Student :public Person
//{
//public:
//	Student(const char* name, int num)
//		:Person(name)
//		, _num(num)
//	{
//		cout << "Student()" << endl;
//	}
//
//	Student(const Student& s)
//		:Person(s)
//		,_num(s._num)
//	{
//		cout << "Student(const Student& s)" << endl;
//	}
//
//	Student& operator=(const Student& s)
//	{
//		cout << "Student& operator=(const Stduent& s)" << endl;
//		if (this != &s)
//		{
//			Person::operator=(s);
//			_num = s._num;
//		}
//		return *this;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//
//protected:
//	int _num;//学号
//};
//void Test()
//{
//	Student s1("jack", 18);
//	Student s2(s1);
//	Student s3("rose", 17);
//	s1 = s3;
//}
//#include<string>
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person()
//	{
//		++_count;
//	}
//protected:
//	string _name;//姓名
//public:
//	static int _count;//统计人的个数
//};
//
//int Person::_count = 0;
//
//class Student :public Person
//{
//protected:
//	int _num;//学号
//};
//
//class Graduate :public Student
//{
//protected:
//	string _seminarCourse;//研究科目
//};
//
//void TestPerson()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	Graduate s4;
//	cout << " 人数 :" << Person::_count << endl;
//	Student::_count = 0;
//	cout << " 人数 :" << Person::_count << endl;
//}

//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Func1()" << endl;
//	}
//private:
//	int _b = 1;
//};
//
//int main()
//{
//	Base b;
//	return 0;
//}

//class Base
//{
//public:
//    virtual void Func1()
//    {
//        cout << "Base::Func1()" << endl;
//    }
//    virtual void Func2()
//    {
//        cout << "Base::Func2()" << endl;
//    }
//    void Func3()
//    {
//        cout << "Base::Func3()" << endl;
//    }
//private:
//    int _b = 1;
//};
//class Derive : public Base
//{
//public:
//    virtual void Func1()
//    {
//        cout << "Derive::Func1()" << endl;
//    }
//private:
//    int _d = 2;
//};
//int main()
//{
//    Base b;
//    Derive d;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Base {
//public:
//	virtual void func1() { cout << "Base::func1" << endl; }
//	virtual void func2() { cout << "Base::func2" << endl; }
//private:
//	int a;
//};
//class Derive :public Base {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//	virtual void func4() { cout << "Derive::func4" << endl; }
//private:
//	int b;
//};
////
////int main()
////{
////	Base b;
////	Derive d;
////	return 0;
////}
//#include<iostream>
//using namespace std;
//class Base {
//public:
//	virtual void func1() { cout << "Base::func1" << endl; }
//	virtual void func2() { cout << "Base::func2" << endl; }
//private:
//	int a;
//};
//class Derive :public Base {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//	virtual void func4() { cout << "Derive::func4" << endl; }
//private:
//	int b;
//};
//typedef void(*VFPTR) ();
//void PrintVTable(VFPTR vTable[])
//{
//	// 依次取虚表中的虚函数指针打印并调用。调用就可以看出存的是哪个函数
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; vTable[i] != nullptr; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}
//int main()
//{
//	Base b;
//	Derive d;
//	// 思路：取出b、d对象的头4bytes，就是虚表的指针，前面我们说了虚函数表本质是一个存虚函数指针的指针数组，这个数组最后面放了一个nullptr
//		// 1.先取b的地址，强转成一个int*的指针
//		// 2.再解引用取值，就取到了b对象头4bytes的值，这个值就是指向虚表的指针
//		// 3.再强转成VFPTR*，因为虚表就是一个存VFPTR类型(虚函数指针类型)的数组。
//		// 4.虚表指针传递给PrintVTable进行打印虚表
//		// 5.需要说明的是这个打印虚表的代码经常会崩溃，因为编译器有时对虚表的处理不干净，虚表最后面没有放nullptr，导致越界，这是编译器的问题。我们只需要点目录栏的 - 生成 - 清理解决方案，再编译就好了。
//		VFPTR * vTableb = (VFPTR*)(*(int*)&b);
//	PrintVTable(vTableb);
//	VFPTR* vTabled = (VFPTR*)(*(int*)&d);
//	PrintVTable(vTabled);
//	return 0;
//}

//#include"BinarySearchTree.h"
//
//int main()
//{
//	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
//	BSTree<int> bt;
//	for (auto e : a)
//	{
//		bt.Insert(e);
//	}
//	bt.InOrder();
//	bt.Erase(14);
//
//	bt.InOrder();
//	bt.Erase(3);
//
//	bt.InOrder();
//	bt.Erase(8);
//
//	bt.InOrder();
//	for (auto e : a)
//	{
//		bt.Erase(e);
//		bt.InOrder();
//	}
//
//	return 0;
//}

//#include"BinarySearchTree.h"
//int main()
//{
//	kv::BSTree<string, string> dict;
//	dict.Insert("sort", "排序");
//	dict.Insert("left", "左边");
//	dict.Insert("right", "右边");
//	dict.Insert("insert", "插入");
//	dict.Insert("key", "钥匙");
//
//	string str;
//	while (cin>>str)
//	{
//		kv::BSTreeNode<string, string>* ret = dict.Find(str);
//		if (ret)
//		{
//			cout << ret->_value << endl;
//		}
//		else
//		{
//			cout << "没找到" << endl;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	// 10:35
//	string arr[] = { "㽶", "","ƻ", "", "ƻ", "", "ƻ", "ƻ", "", "ƻ", "㽶", "ƻ", "㽶" };
//	kv::BSTree<string, int> countTree;
//	for (auto& e : arr)
//	{
//		kv::BSTreeNode<string, int>* ret = countTree.Find(e);
//		if (ret == nullptr)
//		{
//			countTree.Insert(e, 1);
//		}
//		else
//		{
//			ret->_value++;
//		}
//	}
//
//	countTree.InOrder();
//
//	return 0;
//}

//template < class T,                 // set::key_type/value_type   
//	class Compare = less<T>,        // set::key_compare/value_compare           
//	class Alloc = allocator<T>      // set::allocator_type
//	> class set;

//#include<iostream>
//#include<set>
//using namespace std;
//void TestSet()
//{
//	//用数组arr中的元素构造set
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	set<int> s(arr, arr + sizeof(arr) / sizeof(arr[0]));
//	cout << s.size() << endl;
//
//	//正向打印set中的元素,从打印结果中可以看出:set可以去重
//	for (auto& e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//使用迭代器逆向打印set中的元素
//	for (auto it = s.begin();it != s.end();it++)
//	{
//		cout << *it << endl;
//	}
//	cout << endl;
//
//	//set中值为3的元素出现了几次
//	cout << s.count(3) << endl;
//}

//template < class Key,                                     // map::key_type           
//	       class T,                                       // map::mapped_type           
//	       class Compare = less<Key>,                     // map::key_compare           
//	       class Alloc = allocator<pair<const Key,T> >    // map::allocator_type           
//           > class map;

//#include<string>
//#include<map>
//#include<iostream>
//void TestMap()
//{
//	map<string, string> m;
//	//向map中插入元素的方式:
//	//将键值对<"peach","桃子">插入map中,用pair直接来构造键值对
//	m.insert(pair<string, string>("peach", "桃子"));
//
//	//将键值对<"peach","桃子">插入map中，用make_pair函数来构造键值对
//	m.insert(make_pair("peach", "桃子"));
//
//	//借用operator[]向map中插入元素
///*
// operator[]的原理是：
//  用<key, T()>构造一个键值对，然后调用insert()函数将该键值对插入到map中
//  如果key已经存在，插入失败，insert函数返回该key所在位置的迭代器
//  如果key不存在，插入成功，insert函数返回新插入元素所在位置的迭代器
//  operator[]函数最后将insert返回值键值对中的value返回
// */
//
//    // 将<"apple", "">插入map中，插入成功，返回value的引用，将“苹果”赋值给该引用结果，
//	m["apple"] = "苹果";
//
//	//用迭代器去遍历map中的元素，可以得到一个按照key排序的序列
//	for (auto& e : m)
//	{
//		cout << e.first << "->" << e.second << endl;
//	}
//	cout << endl;
//
//	//map中的键值对key一定是唯一的，如果key存在将插入失败
//	auto ret = m.insert(make_pair("peach", "桃色"));
//	if (ret.second)
//	{
//		cout << "<peach, 桃色>不在map中, 已经插入" << endl;
//	}
//	else
//	{
//		cout << "键值为peach的元素已经存在：" << ret.first->first << "--->"<< ret.first->second << " 插入失败" << endl;
//	}
//
//	//删除key为“apple”的元素
//	m.erase("apple");
//	if (1 == m.count("apple"))
//	{
//		cout << "apple还在" << endl;
//	}
//	else
//	{
//		cout << "apple被吃了" << endl;
//	}
//}


//#include<set>
//void TestSet()
//{
//	int arr[]= { 2, 1, 3, 9, 6, 0, 5, 8, 4, 7 };
//	//注意multiset在底层实际储存的是<int,int>的键值对
//	multiset<int> s(arr, arr + sizeof(arr) / sizeof(arr[0]));
//	for (auto& e : s)
//	{
//		cout << e << "";
//	}
//	cout << endl;
//}

//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//
//#include"AVLTree.h"
//
//int main()
//{
//	const int N = 30;
//	vector<int> v;
//	v.reserve(N);
//	//srand(time(0));
//
//	for (size_t i = 0; i < N; i++)
//	{
//		v.push_back(rand());
//		cout << v.back() << endl;
//	}
//
//	AVLTree<int, int> t;
//	for (auto e : v)
//	{
//		if (e == 14604)
//		{
//			int x = 0;
//		}
//
//		t.Insert(make_pair(e, e));
//		cout << "Insert:" << e << "->" << t.IsBalance() << endl;
//	}
//
//	cout << t.IsBalance() << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//#include"RBTree.h"

//int main()
//{
//	//int a[] = { 16, 3, 7, 11, 9, 26, 18, 14, 15 };
//	int a[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
//	RBTree<int, int> t;
//	for (auto e : a)
//	{
//		t.Insert(make_pair(e, e));
//	}
//	t.InOrder();
//
//	cout << t.IsBalance() << endl;
//
//	return 0;
//}

//int main()
//{
//	const int N = 1000;
//	vector<int> v;
//	v.reserve(N);
//	//srand(time(0));
//
//	for (size_t i = 0; i < N; i++)
//	{
//		v.push_back(rand() + i);
//		//cout << v.back() << endl;
//	}
//
//	size_t begin2 = clock();
//	RBTree<int, int> t;
//	for (auto e : v)
//	{
//		if (e == 29365)
//		{
//			int i = 0;
//		}
//
//		t.Insert(make_pair(e, e));
//		cout << "Insert:" << e << "->" << t.IsBalance() << endl;
//	}
//	size_t end2 = clock();
//
//	cout << "Insert:" << end2 - begin2 << endl;
//
//	cout << t.IsBalance() << endl;
//	//cout << t.Height() << endl;
//	//cout << t.Size() << endl;
//
//	/*size_t begin1 = clock();
//	for (auto e : v)
//	{
//		t.Find(e);
//	}
//
//
//	for (size_t i = 0; i < N; i++)
//	{
//		t.Find((rand() + i));
//	}
//
//	size_t end1 = clock();
//
//	cout << "Find:" << end1 - begin1 << endl;*/
//
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//#include"RBTree.h"
//#include"MyMap.h"
//#include"MySet.h"
//
//void test_set()
//{
//	ljh::set<int> s;
//	s.insert(4);
//	s.insert(1);
//	s.insert(2);
//	s.insert(3);
//	s.insert(2);
//	s.insert(0);
//	s.insert(10);
//	s.insert(5);
//
//	ljh::set<int>::iterator it = s.begin();
//	while (it != s.end())
//	{
//		//*it += 1;
//
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	// key޸
//	it = s.begin();
//	//*it = 100;
//
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//void test_map()
//{
//	ljh::map<string, string> dict;
//	dict.insert(make_pair("sort", "排序"));
//	dict.insert(make_pair("sort", ""));
//	dict.insert(make_pair("left", "左边"));
//	dict.insert(make_pair("right", "右边"));
//
//	ljh::map<string, string>::iterator it = dict.begin();
//	while (it != dict.end())
//	{
//		// key޸
//		//it->first += 'x';
//		it->second += 'y';
//
//		cout << it->first << ":" << it->second << endl;
//		++it;
//	}
//	cout << endl;
//
//	string arr[] = { "㽶", "","ƻ", "", "ƻ", "", "ƻ", "ƻ", "", "ƻ", "㽶", "ƻ", "㽶" };
//	ljh::map<string, int> countMap;
//	for (auto& e : arr)
//	{
//		countMap[e]++;
//	}
//
//	for (auto& kv : countMap)
//	{
//		cout << kv.first << ":" << kv.second << endl;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test_map();
//	test_set();
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<unordered_set>
//#include<unordered_map>
//#include<map>
//#include<set>
//using namespace std;
//
//#include"HashTable.h"
//#include"MyUnorderedMap.h"
//#include"MyUnorderedSet.h"
//
//int main()
//{
//	//open_address::TestHT1();
//	//open_address::TestHT2();
//	//hash_bucket::TestHT1();
//	//hash_bucket::TestHT2();
//	//hash_bucket::TestHT3();
//	ljh::test_map();
//	ljh::test_set();
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//#include"bitset.h"
//int main()
//{
//	int a[] = { 1,4,7,9,44,88,1,4,88,99,78,5,7 ,7,7,7 };
//	ljh::twobitset<100> bs;
//	for (auto e : a)
//	{
//		bs.set(e);
//	}
//	bs.Print();
//
//	return 0;
//}

//#include"BloomFilter.h"
//
//int main()
//{
//	//TestBF1();
//	TestBF2();
//	return 0;
//}

//template<class ...Args>
//void ShowList(Args... args)
//{}
//#include<iostream>
//#include<string>
//using namespace std;
////递归终止函数
//template<class T>
//void ShowList(const T& t)
//{
//	cout << t << endl;
//}
//
////展开函数
//template<class T,class ...Args>
//void ShowList(T value, Args... args)
//{
//	cout << value << " ";
//	ShowList(args...);
//}
//
//int main()
//{
//	ShowList(1);
//	ShowList(1, 'A');
//	ShowList(1, 'A', std::string("sort"));
//	return 0;
//}
//#include<iostream>
//#include<expected>
//using namespace std;
//
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr=nullptr)
//		:_ptr(ptr)
//	{}
//
//	~SmartPtr()
//	{
//		if (_ptr)
//		{
//			delete _ptr;
//		}
//	}
//
//private:
//	T* _ptr;
//};
//
//int div()
//{
//	int a, b;
//	cin >> a >> b;
//	if (b == 0)
//	{
//		throw invalid_argument("除0错误");
//	}
//	return a / b;
//}
//
//void func()
//{
//	SmartPtr<int> sp1(new int);
//	SmartPtr<int> sp2(new int);
//	cout << div() << endl;
//}
//
//int main()
//{
//	try
//	{
//		func();
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//#include"SmartPtr.h"
//
//void TestSmartPtr1()
//{
//	SmartPtr<int> sp1(new int);
//	*sp1 = 1;
//
//	SmartPtr<pair<string, int>> sp2(new pair<string, int>("xxxx", 1));
//	sp2->first += 'y';
//	sp2->second += 1;
//	sp2.operator->()->second += 1;
//}
//
//void TestSmartPtr2()
//{
//	SmartPtr<int> sp1(new int);
//	SmartPtr<int> sp2 = sp1;
//}
//
//void test_auto_ptr1()
//{
//	ljh::auto_ptr<int> ap1(new int);
//	ljh::auto_ptr<int> ap2 = ap1;
//
//	// 管理权转移，导致对象悬空
//	(*ap1)++;
//	(*ap2)++;
//}
//
////template<class T>
////ljh::unique_ptr<T>::unique_ptr(const ljh::unique_ptr<T>& up)
////	:_ptr(up._ptr)
////{}
//
//void test_unique_ptr1()
//{
//	ljh::unique_ptr<int> up1(new int(1));
//	//std::unique_ptr<int> up2 = up1;
//
//	ljh::unique_ptr<int> up3(new int(2));
//	//up1 = up3;
//}
//
//void test_shared_ptr2()
//{
//	ljh::shared_ptr<string> sp1(new string("xxxxxxxxxxxxxxxxxx"));
//	ljh::shared_ptr<string> sp2(sp1);
//
//	ljh::shared_ptr<string> sp3(new string("yyyyyyyyy"));
//
//	//sp1 = sp3;
//	//sp3 = sp1;
//
//	sp3 = sp3;
//	cout << *sp3 << endl;
//
//	sp1 = sp2;
//}
//
//struct ListNode
//{
//	int val;
//	ljh::weak_ptr<ListNode> next;
//	ljh::weak_ptr<ListNode> prev;
//
//	~ListNode()
//	{
//		cout << "~ListNode()" << endl;
//	}
//};
//
//void test_shared_ptr3()
//{
//	ljh::shared_ptr<ListNode> n1(new ListNode);
//	ljh::shared_ptr<ListNode> n2(new ListNode);
//	cout << n1.use_count() << endl;
//	cout << n2.use_count() << endl;
//
//	// 循环引用
//	n1->next = n2;
//	n2->prev = n1;
//
//	cout << n1.use_count() << endl;
//	cout << n2.use_count() << endl;
//}
//
//int main()
//{
//	//TestSmartPtr1();
//	//TestSmartPtr2();
//	//test_auto_ptr1();
//	//test_unique_ptr1();
//
//	//test_shared_ptr3();
//
//	return 0;
//}

//#include<iostream>
//#include<map>
//#include<string>
//#include<list>
//using namespace std;
////单例
////饿汉模式：提前（main函数启动时）创建好对象(现吃现做)
////优点：实现简单
////缺点：1.可能导致进程启动慢
////2.如果两个单例有启动先后顺序，那么饿汉无法控制
//class A
//{
//public:
//	static A* GetInstance()
//	{
//		return &_inst;
//	}
//
//	void Add(const string& key, const string& value)
//	{
//		_dict[key] = value;
//	}
//
//	void Print()
//	{
//		for (auto& kv : _dict)
//		{
//			cout << kv.first << ":" << kv.second << endl;
//		}
//		cout << endl;
//	}
//
//private:
//	A()
//	{}
//	
//	A(const A& aa) = delete;
//	A& operator=(const A& aa) = delete;
//
//	map<string, string> _dict;
//	int _n = 0;
//	static A _inst;
//};
//A A::_inst;

//int main()
//{
//	/*A aa1;
//	A aa2;*/
//
//	A::GetInstance()->Add("sort", "排序");
//	A::GetInstance()->Add("left", "左边");
//	A::GetInstance()->Add("right", "右边");
//	A::GetInstance()->Print();
//
//	/*A copy(*A::GetInstance());
//	copy.Print();
//
//	A::GetInstance()->Add("left", "剩余");
//	copy.Print();
//	A::GetInstance()->Print();*/
//
//	//*A::GetInstance() = *A::GetInstance();
//
//	return 0;
//}

//懒汉模式:第一次用的时候再创建(现吃现做)
//new的对象一般不需要释放，进程正常结束会释放资源
//如果需要做一些动作，比如持久化，那么可以利用gc类static对象搞定
//class B
//{
//public:
//	static B* GetInstance()
//	{
//		if (_inst == nullptr)
//		{
//			_inst = new B;
//		}
//		return _inst;
//	}
//
//	void Add(const string& key, const string& value)
//	{
//		_dict[key] = value;
//	}
//
//	void Print()
//	{
//		for (auto& kv : _dict)
//		{
//			cout << kv.first << ":" << kv.second << endl;
//		}
//		cout << endl;
//	}
//
//	static void DelInstance()
//	{
//		if (_inst)
//		{
//			delete _inst;
//			_inst = nullptr;
//		}
//	}
//
//private:
//	B()
//	{}
//
//	~B()
//	{
//		//持久化：要求把数据写到文件
//		cout << "数据写到文件" << endl;
//	}
//
//	B(const B& bb) = delete;
//	B& operator=(const B& bb) = delete;
//	map<string, string> _dict;
//	int _n = 0;
//	static B* _inst;
//
//	class gc
//	{
//	public:
//		~gc()
//		{
//			DelInstance();
//		}
//	};
//	static gc _gc;
//};
//B* B::_inst = nullptr;
//B::gc B::_gc;

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	FILE* fp = fopen("myfile", "w");
//	if (fp == NULL)
//	{
//		printf("fopen error\n");
//	}
//
//	const char* msg = "hello LJH!\n";
//	int count = 5;
//	while (count--)
//	{
//		fwrite(msg, strlen(msg), 1, fp);
//	}
//	fclose(fp);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	FILE* fp = fopen("myfile", "r");
//	if (!fp)
//	{
//		printf("fopen error!\n");
//	}
//
//	char buf[1024];
//	const char* msg = "hello LJH!\n";
//	while (1)
//	{
//		size_t s = fread(buf, 1, strlen(msg), fp);
//		if (s > 0)
//		{
//			buf[s] = 0;
//			printf("%s", buf);
//		}
//		if (feof(fp))
//		{
//			break;
//		}
//	}
//	fclose(fp);
//
//	return 0;
//}
