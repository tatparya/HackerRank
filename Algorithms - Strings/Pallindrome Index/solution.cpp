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
    string input;
    cin >> input;
    int length = input.length();
    int mid = length / 2;
    int found = 0;
    int ind = 0;
    int answer = -1;
    while( ind <= mid && !found )
    {
        if( input[ ind ] != input[ length - 1 - ind ] )
        {
            //  Found! check if ind or length - 1 - ind
            if( input[ ind ] == input[ length - 2 - ind ] && input[ ind + 1 ] == input[ length - 3 - ind ] )
            {
                //  length - 1 - ind
                answer = length - 1 - ind;
            }
            else if( input[ ind + 1 ] == input[ length - 1 - ind ] && input[ ind + 2 ] == input[ length - 2 - ind ] )
            {
                answer = ind;
            }
            else
            {
                answer = length - 1 - ind;
            }

            found++;
        }

        ind++;
    }

    //cout << "Length = " << length << endl;
    //cout << "Last char = "<< input[ length - 1 ] << endl;
    cout << answer << endl;
    //if( answer >= 0)
    //    cout << input[ answer ] << endl;
    //cout << input << endl;
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
