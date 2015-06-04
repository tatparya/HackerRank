#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getPrimeFactors( int number )
{
	vector<int> primeFactors;
	int i = 2;
	while( i < sqrt( number ) )
	{
		if( number % i == 0 )
		{
			number /= i;
			primeFactors.push_back( i );
		}
		else
		{
			i++;
		}
	}

	if( number > 1 )
	{
		primeFactors.push_back( number );
	}

	//	Print all factors
	i = 0;
	cout << "Prime factors of " << number << " are: " << endl;
	while( i < primeFactors.size() )
	{
		cout << primeFactors[ i ] << endl;
		i++;
	}
}

int main() 
{
	int number;
	cin >> number;
	getPrimeFactors( number );
    return 0;
}