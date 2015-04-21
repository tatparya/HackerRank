#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getSumOfMultipes()
{
	int number;
	int sum = 0;

	int scan;
	scan = scanf( "%d", &number );
	for( int i = 3; i < number; i++ )
	{
		if( i % 3 == 0 || i % 5 == 0 )
		{
			sum += i;
		}
	}

	printf( "%d\n", sum );
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
