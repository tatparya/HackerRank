#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

long numDigits( long num )
{
	long count = 0;
	while( num > 0 )
	{
		count++;
		num /= 10;
	}
	return count;
}

long kaprekarNumber( long i )
{
	long long sq = i * i;
	long numDig = numDigits( sq );
	long a, b;

	if ( numDig % 2 == 0 )
	{
		a = sq / ( (long) pow( 10, numDig / 2 ) );
		b = sq % ( (long) pow( 10, numDig / 2 ) );
	}
	else
	{
		a = sq / ( (long) pow( 10, ( numDig / 2 ) + 1 ) );
		b = sq % ( (long) pow( 10, numDig / 2 + 1 ) );
	}

	//cout << a << " " << b << " " << a + b << " "<< i << endl;

	if( a + b == i )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void getKaprekarNumbers( long p, long q )
{
	long valid = 0;
	for( long i = p; i <= q; i++ )
	{
		if( i == 1 || kaprekarNumber( i ) )
		{
			cout << i << " ";
			valid++;
		}
	}

	if( !valid )
	{
		cout << "INVALID RANGE" << endl;
	}
}

int main() 
{
	long p, q;
	cin >> p >> q;	

	getKaprekarNumbers( p, q );

    return 0;
}