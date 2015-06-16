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

    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n - i - 1; j++ )
        {
            printf( " " );
        }

        for( int k = 0; k <= i; k++ )
        {
            printf( "#" );
        }
        printf( "\n" );
    }
}