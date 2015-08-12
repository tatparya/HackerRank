#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

long double getF1( int p, int q, int a, int b )
{
    double f1 = ( p - a ) / ( q + b );
    return f1;
}

long double getF2( int p, int q, int a, int b )
{
    double f2 = ( p + b ) / ( q - a );
    return f2;
}

int main()
{
    long double p = 10010101;
    long double q = 11111117;

    for( int a = 1; a < p + q; a++ )
    {
        for( int b = 1; b < p + q; b++ )
        {
            //cout << "a : " << a << " b : " << b << endl;
        }
    }

    cout << "Done" << endl;

    return 0;
}
