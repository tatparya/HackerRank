#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

long long int getNumHandshakes( int numPeople )
{
	long long int sum;
	sum = numPeople * numPeople - numPeople * ( numPeople - 1 ) / 2;
    return sum;
}


int main() 
{
	int numTestCases;
	int scan;
	int numPeople;
	scan = scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		numTestCases--;
		scan = scanf( "%d", &numPeople );
		printf( "%lld\n", getNumHandshakes( numPeople - 1 ) );
	}
    return 0;
}#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

long long int getNumHandshakes( int numPeople )
{
	long long int sum;
	//	Get sum of AP n + n-1 + n-2 + .. + 2 + 1
	sum = numPeople * numPeople - numPeople * ( numPeople - 1 ) / 2;
    return sum;
}


int main() 
{
	int numTestCases;
	int scan;
	int numPeople;
	scan = scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		numTestCases--;
		scan = scanf( "%d", &numPeople );
		printf( "%lld\n", getNumHandshakes( numPeople - 1 ) );
	}
    return 0;
}