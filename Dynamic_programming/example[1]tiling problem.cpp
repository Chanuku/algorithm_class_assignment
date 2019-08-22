#include <iostream>

//https://www.acmicpc.net/problem/11726
using namespace std;
int d[1001]; //메모제이션 기법
int dp_fast(int x)// O(n)의 속도
{
	if (x == 1) return 1;
	if (x == 2) return 2;
	if (d[x] != 0) return d[x];
	return d[x] = (dp_fast(x - 1) + dp_fast(x - 2)) % 10007;
} //재귀적으로 구현


int main(void)
{
	int n;
	cin >> n;
	cout << dp_fast(n) ;
}

