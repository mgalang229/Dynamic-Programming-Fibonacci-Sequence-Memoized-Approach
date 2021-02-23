#include <bits/stdc++.h>

using namespace std;

int dp[10];

int Fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	int first, second;
	if (dp[n - 1] != -1) {
		first = dp[n - 1];
	} else {
		first = Fibonacci(n - 1);
	}	
	if (dp[n - 2] != -1) {
		second = dp[n - 2];
	} else {
		second = Fibonacci(n - 2);
	}
	return dp[n] = first + second;
}

int main() {
	memset(dp, -1, sizeof(dp));
	cout << Fibonacci(9) << '\n';
	return 0;
}
