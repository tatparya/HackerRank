#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getNumSquares()
{
	//	Get inputs
	long long int a, b;

	cin >> a >> b;

	//	Calculate num Squares
	long long int x;
	int count = 0;

	x = sqrt( a );

	//cout << "X = " << x << endl;

	while( x * x <= b )
	{
		//cout << x * x << endl;
		//cout << "count = "<< count<< endl;
		if( x * x >= a && x * x <= b )
		{
			count++;
		}

		x++;
	}

	cout << count << endl;

}

int main() 
{
	int numTestCases;
	int scan;
	scan = scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		numTestCases--;
		getNumSquares();
	}
    return 0;
}