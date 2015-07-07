#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 101
using namespace std;

void exchangeChar( char * string, int i, int j )
{
    char temp;

    temp = string[i];
    string[i] = string[j];
    string[j] = temp;
}

void getResult()
{
    //  Get String
    char string[101];
    cin >> string;
    int length = strlen( string );
    int found = 0;
    int i;
    int j = length - 1;
    int less;
    //cout << "Case : "<< string<< endl;
    //  Start at right end of string
    //  Find a char less than current char
    while( j >= 0 && !found )
    {
        less = j;
        i = j - 1;
        //cout << "Char : " << string[j] << endl;
        while( i >= 0 && !found )
        {
            //cout << "Checking : " << string[i] << endl;
            //  Test to check if less than
            if( string[i] < string[j] )
            {
                less = i;
                //cout << "Less found at : " << less << " is : " << string[less] << endl;
                //cout << "While compare char at : " << j << " is : " << string[j] << endl;
                found++;
            }
            //  Incremend
            i--;
        }
        //  Incremend
        j--;
    }
    if( !found )
    {
        cout << "no answer" << endl;
        return;
    }
    //  Swap
    exchangeChar( string, less, j + 1 );
    //cout << "After exchange : " << string << endl;
    //cout << "Sort after : " << string[less] << endl;

    //  Sort after less
    int begin = less + 1;
    i = begin;
    while( i < length - 1 )
    {
        j = i + 1;
        while( j >= begin + 1 && string[j] < string[j-1] )
        {
            exchangeChar( string, j, j-1 );
            //cout << "Exchange " << string[j] << " and " << string[j - 1] << endl;
            j--;
        }
        i++;
    }
    //cout << "Afer sort : " << string << endl << endl;
    cout << string << endl;
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
