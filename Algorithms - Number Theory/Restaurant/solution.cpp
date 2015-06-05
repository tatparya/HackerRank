#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if ( b == 0 )
        return a;
    return gcd( b, a % b );
}

void getNumCuts()
{
    int a, b;
    cin >> a >> b;
    
    int g = gcd( a, b );
    int numPieces = a * b / g / g;

    cout << numPieces << endl;
}

int main() 
{
    int t;
    cin >> t;
    while( t > 0 )
    {
        t--;
        getNumCuts();
    }
    return 0;
}
