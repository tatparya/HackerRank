#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getResult()
{
	//	Get numFiles
	int numFiles;
	int N;
	long Mi;
	scanf( "%d", &N );

	//	Get array and calc result
	long int totalUsage = 0;
	long int usage;
	long int temp;
	scanf( "%ld", &usage );
	totalUsage += usage;

	for( int i = 1; i < N; i++ )
	{
		//	Get new usage and compare with last
		scanf( "%ld", &temp );
		if( temp > usage )
		{
			totalUsage += temp - usage;
		}
		usage = temp;
	}

	printf( "%ld\n", totalUsage );
}

int main()
{
	int numTestCases;
	scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		numTestCases--;
		getResult();
	}
    return 0;
}
