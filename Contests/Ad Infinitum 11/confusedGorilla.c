#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

class Coordinate
{
	int x;
	int y;
	int numWays;
	int probability;

	Coordinate( int a, int b )
	{
		x = a;
		y = b;
		calculateNumWaus( x, y )
	}

	//	Member Function
	int calculateNumWays( int x, int y )

};

int Coordinate :: calculateNumWays( int x, int y )
{
	return x + y;
}

int calcFactorial( int num )
{
	int result = 1;
	for( ; num > 0; num-- )
		result *= num;

	return result;
}

void getResult( int numSteps )
{
	for( int i = 0; i <= numSteps; i++ )
	{
		for( int j = 0; j <= numSteps; j++ )
		{
			if( ( i + j ) == numSteps )
			{
				cout << i << ", " << j << "\n";

			}
		}
	}
}

int main()
{
    int numTestCases;
    int numSteps;
    //	Get num test cases
    cin >> numTestCases;
    for( int i = 0; i < numTestCases; i++ )
    {
    	//	Get num steps
    	cin >> numSteps;
    	cout << "Test case: " << numSteps << "\n\n";
    	getResult( numSteps );
    }
    return 0;
}
