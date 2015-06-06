#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

//	Return sum of digits of a number
int getSumOfDigits( int n )
{
	int dig;
	int sum = 0;
	while( n > 0 )
	{
		dig = n % 10;
		sum += dig;

		n /= 10;
	}

	return sum;
}

void identifySmith( int n )
{
	int sum;

	//	Get sum of digits in n
	sum = getSumOfDigits( n );
	cout << sum << endl;

	//	Prime factorize n
    int factorSum = 0;
	int i = 2;

	//	Prime factorization
	while( i < sqrt( n ) )
	{
		if( n % i == 0 )
		{
            n /= i;
            factorSum += getSumOfDigits( i );
		}
		else
		{
			i++;
		}
	}
    
    if( n > 1 )
    {
        factorSum += getSumOfDigits( n );
    }

	//	Final test
	if( factorSum == sum )
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}

}

int main() 
{
	int n;
	cin >> n;

	//	Check if smiths Number
	identifySmith( n );

    return 0;
}