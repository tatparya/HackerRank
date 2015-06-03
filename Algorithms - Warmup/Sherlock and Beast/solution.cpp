#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getResult()
{
	//	Get number of digits
	int n;
	scanf( "%d", &n );

	//	Find number
	int numFive;
	int numThree;
	int temp = n;
	int found = 0;

	//	Get number of fives and threes
	while( temp > 0 && !found )
	{
		if( temp % 3 == 0 )
		{
			numFive = temp;
			numThree = n - temp;
			found++;
		}

		temp -= 5;
	}

	//	If no fives then all threes
	if( !found )
	{
		if( n % 5 == 0 )
		{
			numFive = 0;
			numThree = n;
			found++;
		}
	}

	//	If still not found then not possible
	if( !found )
	{
		printf( "-1\n" );
		return;
	}

	//	If possible, print out number
	for( int i = 0; i < numFive; i++ )
	{
		printf( "5" );
	}

	for( int i = 0; i < numThree; i++ )
	{
		printf( "3" );
	}

	printf( "\n" );
}

int main() 
{
	int numTestCases;
	int scan;
	scan = scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		numTestCases--;
		getResult();
	}
    return 0;
}