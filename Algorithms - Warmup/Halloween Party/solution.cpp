#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getChocolates()
{
	long long int numSlices;
	long long int totalNumPieces = 0;
	long long int horizontal;
	long long int vertical;

	cin >> numSlices;
	horizontal = ceil( numSlices / 2 );
	vertical = numSlices - horizontal;

	totalNumPieces = horizontal * vertical;

	cout << totalNumPieces << endl;
}

int main() 
{
	int numTestCases;
	cin >> numTestCases;
	for( int i = 0; i < numTestCases; i++ )
	{
		getChocolates();
	}

    return 0;
}