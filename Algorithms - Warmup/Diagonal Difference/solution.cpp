#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int main() 
{
	// Get matrix elements;
    int n;
    int element;

    int sum1 = 0;
    int sum2 = 0;

    cin >> n;
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            cin >> element;

            if( i == j )
            {
                sum1 += element;
            }

            if( i + j == n - 1 )
            {
                sum2 += element;
            }
        }
    }

    //    cout << sum1 << endl << sum2 << endl;

    //  Get abs sum
    cout << abs( sum1 - sum2 ) << endl;
}