#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int main() 
{
	int n;
    cin >> n;

    //  Get fractions

    int element;
    int neg = 0;
    int pos = 0;
    int zero = 0;

    for( int i = 0; i < n; i ++ )
    {
        cin >> element;

        if( element < 0 )
        {
            neg++;
        }
        else if( element == 0 )
        {
            zero++;
        }
        else
        {
            pos++;
        }
    }

    //  Get fractions

    printf( "%0.3f\n%0.3f\n%0.3f\n", (float) pos / n, (float) neg / n, (float) zero / n );
}