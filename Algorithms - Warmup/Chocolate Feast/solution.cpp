#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getNumChocolates()
{
	long int N;	//	Total money
	long int C;	//	Cost of one chocolate
	long int M;	//	Num wrappers for one chocolate
	long int numChoc;
	long int numWrappers;
	long int numWrappersLeft;

	cin >> N >> C >> M;
	//cout << N << " " << C << " " << M << endl;

	numChoc = N / C;
	numWrappers = numChoc;
	while( ( numWrappers / M ) > 0  )
	{
		numChoc += numWrappers / M;
		numWrappers = numWrappers % M + numWrappers / M;	
	}

	cout << numChoc << endl;
}

int main() 
{
	int numTestCases;
	int scan;
	scan = scanf( "%d", &numTestCases );
	while( numTestCases > 0 )
	{
		numTestCases--;
		getNumChocolates();
	}
    return 0;
}