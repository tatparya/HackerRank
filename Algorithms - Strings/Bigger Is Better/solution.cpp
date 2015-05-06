#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void exchangeChar( char * string, int i, int j )
{
    char temp;

    temp = string[i];
    string[i] = string[j];
    string[j] = temp;
}

void getResult()

//  Get next min
//  Srt
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
        for( int j = i - 1; j >= 0; j-- )
        {
            //printf( "char : %d,%d %d,%d\n", string[i], i, string[j], j );
            if( string[i] > string[j] )
            {
                exchangeChar( string, i, j );
                printf( "%s\n", string );
                return;
            }
        }
    }

    printf( "no answer\n" );
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
