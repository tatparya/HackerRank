#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int main() 
{
	int n;
	int m;
	int a;
	int b;
	long long int k;
	long long int total = 0;

	//	Get n and m
	cin >> n >> m;

	for( int i = 0; i < m; i++ )
	{
		//	Get operations
		cin >> a >> b >> k;

		//	Operate on total
		total += ( b - a + 1 ) * k;
	}

	cout << total / n << endl;

    return 0;
}