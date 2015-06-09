#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar


int main() 
{
	int a, b, n;
	long long number;
	long long int tnmin1;
	long long int tnmin2;
	cin >> a >> b >> n;

	tnmin2 = a;
	tnmin1 = b;

	int i = 2;
	while( i < n )
	{
		number = tnmin1 * tnmin1 + tnmin2;
		tnmin2 = tnmin1;
		tnmin1 = number;
		i++;
	}

	cout << number << endl;

    return 0;
}