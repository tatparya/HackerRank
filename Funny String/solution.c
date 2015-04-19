#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void getResult()
{
    //  Get string
    char string[10001];
    scanf( "%s", string );
    int length = strlen( string );
    int diff1;
    int diff2;
    for( int i = 1; i < length; i++ )
    {
        diff1 = string[i] - string[i - 1];
        diff2 = string[length-(i+1)] - string[length - i];
        diff1 < 0 ? diff1 *= -1: diff1 = diff1;
        diff2 < 0 ? diff2 *= -1: diff2 = diff2;
        //cout << "Dif1 = "<< diff1<< " Diff2 = "<< diff2<< endl;        
        if( diff1 != diff2 )
        {
            cout << "Not Funny\n";
            return;
        }
    }
    
    cout << "Funny\n";
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
