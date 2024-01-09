#include<stdio.h>

/*
28p~29p에 적혀있는 답안이다. 
*/

int BSearch(int arr[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;
	int count = 0;

	while (first <= last)
	{
		mid = (first + last) / 2;

		if (target == arr[mid])
		{
			return mid;
		}
		else
		{
			if (target < arr[mid])
				last = mid - 1;
			else
				first = mid + 1;
			count++;
		}
	}
	printf("Operator Count : %d \n", count);
	// 500번 탐색했을 때 이진 탐색 알고리즘은 총 9번 연산한다. (O(n)은 500번 연산)
	// 5000번 탐색했을 때 이진 탐색 알고리즘은 총 13번 연산한다. (O(n)은 500번 연산)
	// 50000번 탐색했을 때 이진 탐색 알고리즘은 총 16번 연산한다. (O(n)은 500번 연산)
	// 이로써 O(n)의 알고리즘과 O(logn)의 알고리즘의 연산횟수 차이가 엄청난 것을 확인할 수 있다.
	return -1;
}

int main()
{
	int arr1[500] = { 0 };
	int arr2[5000] = { 0 };
	int arr3[50000] = { 0 };
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 1);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);
	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 1);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);
}