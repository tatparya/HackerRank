#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar
bool check(int num, int x, int y, int z) {
	while(num) {
		int digit = num % 10;
		
		if (digit == 4 && x) 
			x--;
		else if (digit == 5 && y) 
			y--;
		else if (digit == 6 && z) 
			z--;
		else return 
			false;

		num /= 10;
	}
	return true;
}

#define MOD 1000000007

long long int calcMax( int x, int y, int z )
{
	long long int max = 0;
	for( int i = 0; i < z; i++ )
	{
		max = max * 10 + 6;
	}
	for( int i = 0; i < y; i++ )
	{
		max = max * 10 + 5;
	}
	for( int i = 0; i < x; i++ )
	{
		max = max * 10 + 4;
	}

	return max;
}

int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z;
	long long sum = 0;
	long long max = calcMax( X, Y, Z );
	//cout << max << endl;
	for (int i = 4; i <= max; i++) {
		if (check(i, X, Y, Z)) {
			if (sum) {
			//cout << " + ";
			}
			sum += i;
			sum %= MOD;
			//cout << i;
		}
	}
	cout << sum << endl;
}