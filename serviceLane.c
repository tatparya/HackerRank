#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//	Service Lane problem: https://www.hackerrank.com/challenges/service-lane

void getOutput( int entryPoint, int exitPoint, int * highway )
{
	int largest = highway[ entryPoint ];
	int k = entryPoint;
	for( k = entryPoint; k <= exitPoint; k++ )
	{
		if( highway[k] < largest )
		{
			largest = highway[k];
		}
	}

	printf( "%d\n", largest );
}

int main() 
{
	int highway[100001];
	int highwayLength;
	int numTestCases;
	int entryPoint;
	int exitPoint;

	//	Get length and num testcases
	scanf( "%d %d", &highwayLength, &numTestCases );

	//	Get highway
	int i = 0;
	for( i = 0; i < highwayLength; i++ )
	{
		scanf( "%d", &highway[i] );
	}

	//	Get testcase
	int j = 0;
	for( j = 0; j < numTestCases; j++ )
	{
		scanf( "%d %d", &entryPoint, &exitPoint );
		//	Get Result
		getOutput( entryPoint, exitPoint, highway );
	}

    return 0;
}