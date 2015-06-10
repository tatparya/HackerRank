#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar
int gcd(int a, int b)
{
    if ( b == 0 )
        return a;
    return gcd( b, a % b );
}

int main() 
{
	int a, b;
	cin >> a >> b;
	cout << gcd( a,b ) << endl;
    return 0;
}