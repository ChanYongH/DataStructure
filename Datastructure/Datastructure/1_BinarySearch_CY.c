#include<stdio.h>
#include<stdlib.h>

#define ARR_COUNT 9

// 알고리즘 설명 바탕으로 직접 작성해본 코드

/*
제약 사항
- 배열에 저장된 데이터는 정렬되어 있어야 한다.

알고리즘 설명
1. 배열 인덱스의 시작과 끝은 각각 0과 8이다.
2. 0과 8을 합하여 그 결과를 2로 나눈다.
3. 2로 나눠서 얻은 결과 4를 인덱스 값으로 하여 arr[4]에 저장된 값이 3인지 확인한다.
4. arr[4]에 저장된 값 9와 탐색 대상인 3의 대소를 비교한다.
5. 대소의 비교결과는 arr[4]>3이므로 탐색의 범위를 인덱스 기준 0~3으로 제한한다.
6. 0과 3을 더하여 그 결과를 2로 나눈다. 이 때 나머지는 버린다.
7. 2로 나눠서 얻은 결과가 1이니 arr[1]에 저장된 값이 3인지 확인한다.
8. arr[1]에 저장된 값 2와 탐색 대상인 3의 대소를 비교한다.
9. 대소의 비교결과는 arr[1]<3이므로 탐색의 범위를 인덱스 기준 2~3으로 제한한다.
10. 2와 3을 더하여 그 결과를 2로 나눈다. 이때 나머지는 버린다.
11. 2로 나눠서 얻은 결과가 2이니 arr[2]에 저장된 값이 3인지 확인한다.

*/

int* createArr()
{
	int* arr = (int*)malloc(sizeof(int) * ARR_COUNT);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 7;
	arr[4] = 9;
	arr[5] = 12;
	arr[6] = 21;
	arr[7] = 23;
	arr[8] = 27;
	return arr;
}
int binarySearch(int* _Arr, int _FindNum)
{
	int t_First = 0;
	int t_Last = ARR_COUNT - 1;
	int t_CurrIdx = -1;
	int t_Result = -1;

while (t_First < t_Last)
	{
		t_CurrIdx = (t_First + t_Last) / 2;
		if (_Arr[t_CurrIdx] == _FindNum)
		{
			t_Result = t_CurrIdx;
			break;
		}
		else if (_Arr[t_CurrIdx] > _FindNum)
			t_Last = t_CurrIdx - 1;
		else if (_Arr[t_CurrIdx] < _FindNum)
			t_First = t_CurrIdx + 1;
	}

	return t_Result;
}

void main()
{
	int* arr = createArr();
	int idx = -1;
	for (int i = 0; i < 9; i++)
	{
		printf("%d \n", arr[i]);
	}
	idx = binarySearch(arr, 1);

	if (idx != -1)
		printf("Result : %d", idx);
	else
		printf("Find failed.");

	free(arr);
}