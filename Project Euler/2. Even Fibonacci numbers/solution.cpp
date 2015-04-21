#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getSumOfFibonacci()
{
	long long int sum = 0;
	long long int fib1 = 0;
	long long int fib2 = 1;
	long long int fibNext = fib1 + fib2;
	long long int number;
	int scan;

	scan = scanf( "%lld", &number );

	while( fibNext < number )
	{
		//	Check if even
		if( fibNext % 2 == 0 )
		{
			sum += fibNext;
		}

		fibNext = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibNext;
		
	}

	printf( "%lld\n", sum );
}

int main() 
{
	int numTestCases;
	int scan;
	scan = scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		getSumOfFibonacci();
		numTestCases--;
	}
    return 0;
}
