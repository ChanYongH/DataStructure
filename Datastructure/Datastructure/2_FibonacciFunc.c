﻿#include <stdio.h>

int Fibo(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
	for (int i = 1; i < 15; i++)
		printf("%d 번째 숫자 : %d \n", i, Fibo(i));
	return 0;
}