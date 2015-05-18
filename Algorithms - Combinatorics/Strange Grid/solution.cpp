#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar


int main() 
{
	long long int r;
	long long int c;
	long long int i;

	cin >> r >> c;

	if( r % 2 != 0 )
	{
		i = ( c - 1 ) * 2 + ( r / 2 ) * 10;
	}

	else
	{
		i = ( c - 1 ) * 2 + 1 + ( r / 2 - 1 ) * 10;
	}

	cout << i << endl;

    return 0;
}