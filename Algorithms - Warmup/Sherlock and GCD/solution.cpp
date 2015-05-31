#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int gcd(int a, int b)
{
    if ( b == 0 )
    	return a;
    return gcd( b, a % b );
}

void getResult()
{
	//	Get array A
	int n;
	int scan;
	scan = scanf( "%d", &n );
	
	int g = 0;
	int j;
	for( int i = 0; i < n; i++ )
	{
		scan = scanf( "%d", &j );

		g = gcd( g, j );
	}

	if( g == 1 )
	{
		printf( "YES\n" );
	}
	else
	{
		printf( "NO\n" );
	}
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