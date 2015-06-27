
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long int checkPow( unsigned long long int num )
{
	unsigned long long int result;
	int count = 0;
	while( num > 1 && num % 2 == 0 )
	{
		num = num / 2;
		count++;
	}

	if( num == 1 )
	{
		return 0;
	}
	else
	{
		while( num > 0 )
		{
			num = num / 2;
			count++;
		}

		return( pow( 2, count - 1 ) );
	}
}

void getResult()
{
	//	Get number
	unsigned long long int number;
	cin >> number;
	int player = 1;
	while( number != 1 )
	{
		//	Check if number is pow of two
		unsigned long long int result = checkPow( number );
		//cout << "number = " << number << endl;
		if( result )
		{
			number = number - result;
		}
		else
		{
			number = number / 2;
		}
		//cout << "after number = " << number << endl;
		//cout << "result = " << result << endl;
        player *= -1;
	}
    
    if( player == 1 )
    {
        cout << "Richard" << endl;
    }
    else
    {
        cout << "Louise" << endl;
    }
}

int main() {
    int numTest;
    cin >> numTest;

    for( int i = 0; i < numTest; i++ )
    {
    	getResult();
    }
}
