#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

long long int getTn( long n )
{
    if( n == 1 )
        return 1;
    else
        return getTn( n - 1 ) + n;
}

int main()
{

    cout << getTn(99999) / 99999 << endl;

    return 0;
}
