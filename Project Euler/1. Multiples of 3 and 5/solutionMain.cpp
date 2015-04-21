#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

long long int sumOfAP( long long int n, long long int number )
{
	long long int sum = 0;
	sum = number * ( n / number * ( 1 + n / number ) / 2 );
	return sum;
}

void getSumOfMultipes()
{
	int number;
	long long int sum = 0;

	int scan;
	scan = scanf( "%d", &number );
	//	Sum = sum of AP 3 + AP 5 - AP 15
	sum = sumOfAP( number - 1, 3 ) + sumOfAP( number - 1, 5 ) - sumOfAP( number - 1, 15 );
	printf( "%lld\n", sum );
}

int main() 
{
	int numTestCases;
	int scan;
	scan = scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		getSumOfMultipes();
		numTestCases--;
	}
    return 0;
}