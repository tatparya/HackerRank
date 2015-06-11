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
	long long int numFiles;
	long long int N;
	long long int Mi;
	scanf( "%lld", &N );

	//	Get array and calc result
	long long int totalUsage = 0;
	long long int usage;
	long long int temp;
	scanf( "%lld", &usage );
	totalUsage += usage;

	for( long long int i = 1; i < N; i++ )
	{
		//	Get new usage and compare with last
		scanf( "%lld", &temp );
		if( temp > usage )
		{
			totalUsage += temp - usage;
		}
		usage = temp;
	}

	printf( "%lld\n", totalUsage );
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
