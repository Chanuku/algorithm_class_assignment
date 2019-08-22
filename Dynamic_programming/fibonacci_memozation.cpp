#include <stdio.h>

//피보나치수열
int dp(int x)// 2^n의 연산횟수(느리다)
{
	if (x == 1) return 1;
	if (x == 2) return 1;
	return dp(x - 1) + dp(x - 2);
} //재귀적으로 구현


int d[100]; //메모제이션 기법
int dp_fast(int x)// O(n)의 속도
{
	if (x == 1) return 1;
	if (x == 2) return 1;
	if (d[x] != 0) return d[x];
	return d[x] = dp_fast(x - 1) + dp_fast(x - 2);
} //재귀적으로 구현


int main(void)
{
	printf("%d\n", dp(10)); // 2^n의 연산횟수(느리다)
	printf("%d", dp_fast(30));
}

