#include "Stack.h"
#include<stdlib.h>
#include<string.h>
void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

// ʱ�临�Ӷ�(�)��O(N^2) -- ����
// ʱ�临�Ӷ�(���)��O(N) -- ˳������
//void InsertSort(int* a, int n)
//{
//	for (int i = 1; i < n; ++i)
//	{
//		// [0, end] ���򣬲���tmp��������
//		int end = i - 1;
//		int tmp = a[i];
//
//		while (end >= 0)
//		{
//			if (a[end] < tmp)
//			{
//				a[end + 1] = a[end];
//				--end;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		a[end + 1] = tmp;
//	}
//}
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		// [0, end] ���򣬲���tmp��������
		int end = i;
		int tmp = a[i + 1];

		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}

		a[end + 1] = tmp;
	}
}


/*for (int j = 0; j < gap; j++)
	{
		for (int i = j; i < n - gap; i += gap)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}

			a[end + gap] = tmp;
		}
	}*/

	// ��Ϣ20:28����
	// O(N^1.3)
void ShellSort(int* a, int n)
{
	// 1��gap > 1 Ԥ����
	// 2��gap == 1 ֱ�Ӳ�������

	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;  // +1���Ա�֤���һ��һ����1
		// gap = gap / 2;
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}

			a[end + gap] = tmp;
		}
	}
}

void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; ++j)
	{
		bool exchange = false;
		for (int i = 1; i < n - j; i++)
		{
			if (a[i - 1] > a[i])
			{
				int tmp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = tmp;

				exchange = true;
			}
		}

		if (exchange == false)
		{
			break;
		}
	}
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int maxi = begin, mini = begin;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}

			if (a[i] < a[mini])
			{
				mini = i;
			}
		}

		Swap(&a[begin], &a[mini]);
		// ���maxi��begin�ص�������һ�¼���
		if (begin == maxi)
		{
			maxi = mini;
		}

		Swap(&a[end], &a[maxi]);

		++begin;
		--end;
	}
}

void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;

	while (child < n)
	{
		// �ҳ�С���Ǹ�����
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;
		}

		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// ������
void HeapSort(int* a, int n)
{
	// �����
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

int GetMidIndex(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
	else // a[left] > a[mid]
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
}


// hoare
// [left, right]
int PartSort1(int* a, int left, int right)
{
	int midi = GetMidIndex(a, left, right);
	Swap(&a[left], &a[midi]);

	int keyi = left;
	while (left < right)
	{
		// �ұ���С
		while (left < right && a[right] >= a[keyi])
		{
			--right;
		}

		// ����Ҵ�
		while (left < right && a[left] <= a[keyi])
		{
			++left;
		}

		Swap(&a[left], &a[right]);
	}

	Swap(&a[keyi], &a[left]);

	return left;
}


// �ڿӷ�
// [left, right]
int PartSort2(int* a, int left, int right)
{
	int midi = GetMidIndex(a, left, right);
	Swap(&a[left], &a[midi]);

	int key = a[left];
	int hole = left;
	while (left < right)
	{
		// �ұ���С
		while (left < right && a[right] >= key)
		{
			--right;
		}

		a[hole] = a[right];
		hole = right;

		// ����Ҵ�
		while (left < right && a[left] <= key)
		{
			++left;
		}

		a[hole] = a[left];
		hole = left;
	}

	a[hole] = key;

	return hole;
}

// ǰ��ָ�뷨
// [left, right]
int PartSort3(int* a, int left, int right)
{
	int midi = GetMidIndex(a, left, right);
	Swap(&a[left], &a[midi]);

	int prev = left;
	int cur = left + 1;
	int keyi = left;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			Swap(&a[prev], &a[cur]);
		}

		++cur;
	}

	Swap(&a[prev], &a[keyi]);
	keyi = prev;
	return keyi;
}

// ʱ�临�Ӷ�: O(logN*N)
// �ռ临�Ӷȣ�O(logN)
void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
		return;

	int keyi = PartSort3(a, begin, end);
	// [begin, keyi-1] keyi [keyi+1, end]

	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}

void QuickSortNonR(int* a, int begin, int end)
{
	ST st;
	STInit(&st);
	STPush(&st, end);
	STPush(&st, begin);

	while (!STEmpty(&st))
	{
		int left = STTop(&st);
		STPop(&st);

		int right = STTop(&st);
		STPop(&st);

		//int keyi = PartSort3(a, left, right);
		int keyi = PartSort1(a, left, right);

		// [left, keyi-1] keyi [keyi+1, right]

		if (keyi + 1 < right)
		{
			STPush(&st, right);
			STPush(&st, keyi + 1);
		}

		if (left < keyi - 1)
		{
			STPush(&st, keyi - 1);
			STPush(&st, left);
		}
	}

	STDestroy(&st);
}

// ʱ�临�Ӷȣ�O(logN * N)
// �ռ临�Ӷȣ�O(N)
// 17:05����
void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin == end)
		return;

	// С�����Ż�
	/*if (end - begin + 1 < 10)
	{
		InsertSort(a+begin, end - begin + 1);

		return;
	}*/

	int mid = (begin + end) / 2;
	// [begin, mid] [mid+1, end]
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	// �鲢��������
	// ...

	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}

	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);

	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);
}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);

	// 1  2  4 ....
	int gap = 1;
	while (gap < n)
	{
		int j = 0;
		for (int i = 0; i < n; i += 2 * gap)
		{
			// ÿ��ĺϲ�����
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;

			printf("[%d,%d][%d,%d]\n", begin1, end1, begin2, end2);

			if (end1 >= n || begin2 >= n)
			{
				break;
			}

			// ����
			if (end2 >= n)
			{
				end2 = n - 1;
			}

			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] <= a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}

			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}

			// �鲢һ�飬����һ��
			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
		}
		printf("\n");

		//memcpy(a, tmp, sizeof(int) * n);
		gap *= 2;
	}

	free(tmp);
}

//void MergeSortNonR(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//
//	// 1  2  4 ....
//	int gap = 1;
//	while (gap < n)
//	{
//		int j = 0;
//		for (int i = 0; i < n; i += 2 * gap)
//		{
//			// ÿ��ĺϲ�����
//			int begin1 = i, end1 = i + gap - 1;
//			int begin2 = i + gap, end2 = i + 2 * gap - 1;
//
//			printf("����ǰ��[%d,%d][%d,%d]\n", begin1, end1, begin2, end2);
//
//			if (end1 >= n)
//			{
//				end1 = n - 1;
//
//				// ����������
//				begin2 = n;
//				end2 = n - 1;
//			}
//			else if (begin2 >= n)
//			{
//				// ����������
//				begin2 = n;
//				end2 = n - 1;
//			}
//			else if(end2 >= n)
//			{
//				end2 = n - 1;
//			}
//
//			printf("������[%d,%d][%d,%d]\n", begin1, end1, begin2, end2);
//
//
//			while (begin1 <= end1 && begin2 <= end2)
//			{
//				if (a[begin1] <= a[begin2])
//				{
//					tmp[j++] = a[begin1++];
//				}
//				else
//				{
//					tmp[j++] = a[begin2++];
//				}
//			}
//
//			while (begin1 <= end1)
//			{
//				tmp[j++] = a[begin1++];
//			}
//
//			while (begin2 <= end2)
//			{
//				tmp[j++] = a[begin2++];
//			}
//		}
//		printf("\n");
//
//		memcpy(a, tmp, sizeof(int) * n);
//		gap *= 2;
//	}
//
//	free(tmp);
//}

// ʱ�临�Ӷȣ�O(N+Range)
// �ռ临�Ӷȣ�O(Range)
// ȱ��1���������ݷ�Χ�������ڷ�Χ���е�����
// ȱ��2��ֻ����������
void CountSort(int* a, int n)
{
	int min = a[0], max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}

		if (a[i] > max)
		{
			max = a[i];
		}
	}

	int range = max - min + 1;
	int* countA = (int*)malloc(sizeof(int) * range);
	memset(countA, 0, sizeof(int) * range);

	// ͳ�ƴ���
	for (int i = 0; i < n; i++)
	{
		countA[a[i] - min]++;
	}

	// ����
	int k = 0;
	for (int j = 0; j < range; j++)
	{
		while (countA[j]--)
		{
			a[k++] = j + min;
		}
	}
}