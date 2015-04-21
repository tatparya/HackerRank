#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar
void findSmallestMultiple()
{
	int n;
	long int number = 1;
	int scan = scanf( "%d", &n );
	for( int i = n-1; i > 0; i-- )
	{
		if( number % i != 0 )
		{
			number *= i;
		}
	}

	if( number % n != 0 )
	{
		number *= n;
	}

	printf( "%ld\n", number );
}

int main() 
{
	int numTestCases;
	int scan;
	scan = scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		findSmallestMultiple();
		numTestCases--;
	}
    return 0;
}
