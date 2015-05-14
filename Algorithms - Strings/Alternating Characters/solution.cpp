#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void deleteNext( char * string, int i, int length )
{
    for( ; i < length - 1; i++ )
    {
        string[i] = string[i + 1];
    }
}

void getResult()

//  Get next min
//  Srt
{
    //  Get String
    char string[100001];
    int length;
    int del = 0;
    scanf( "%s", string );
    length = strlen( string );
    
    //  Iterate over string
    for( int i = length - 1; i >= 0; i-- )
    {
        if( string[i] == string[i+1] )
        {
            del++;
        }
    }

    cout << del << endl;
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
