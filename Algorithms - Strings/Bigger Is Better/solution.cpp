#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void exchangeChar( char * string, int i, int j )
{
    
}

void getResult()
{
    //  Get String
    char string[101];
    int length;
    int found = 0;
    scanf( "%s", string );
    length = strlen( string );

    //  Iterate over string
    for( int i = length - 1; i >= 0; i-- )
    {
        for( int j = i; j >= 0; j++ )
        {
            if( string[i] > string[j] )
            {
                exchangeChar( string, i, j );
            }
        }
    }
}

int main() {
    //  Get numTestCases
    int numTestCases;
    cin >> numTestCases;
    
    for( int i = 0; i < numTestCases; i++ )
    {
        getResult();
    }
    return 0;
}
