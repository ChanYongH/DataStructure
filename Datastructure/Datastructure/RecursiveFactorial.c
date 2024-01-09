#include <stdio.h>

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

void main()
{
	for(int i = 0; i < 11; i++)
		printf("%d! = %d \n", i, Factorial(i));
	// ex) Factorial(5)
	// 다음 함수는 다음과 같은 순서로 실행된다.
	// 1. 2 * 1
	// 2. 3 * 2
	// 3. 4 * 6
	// 4. 5 * 24 = 120 Return
}