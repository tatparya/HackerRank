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

	//	Get array and calc result
	long int totalUsage = 0;
	long int usage;
	long int temp;
	scanf( "%d", &usage );
	totalUsage += usage;

	for( int i = 1; i < N; i++ )
	{
		//	Get new usage and compare with last
		scanf( "%d", &temp );
		if( temp > usage )
		{
			totalUsage += temp - usage;
		}
		usage = temp;
	}

	printf( "%d\n", totalUsage );
}

int main() 
{
	int numTestCases;
	scan = scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		numTestCases--;
		getResult();
	}
    return 0;
}