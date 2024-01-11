#include <stdio.h>
// 재귀함수를 사용하면 함수가 호출 빈도 수가 많아진다. 이로 인해 메모리 사용량 증가 및 오버헤드 발생 등등 성능이 저하된다.
// 하지만 재귀함수에 익숙해지기위해 이진 탐색 알고리즘을 재귀함수로 구현해본 것이다.

int BSearchRecur(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last)
		return -1;
	mid = (first + last) / 2;

	if (ar[mid] == target)
		return mid;
	if (target < ar[mid])
		return BSearchRecur(ar, first, mid - 1, target);
	else
		return BSearchRecur(ar, mid + 1, last, target);
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스 : %d \n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스 : %d \n", idx);
	return 0;
}