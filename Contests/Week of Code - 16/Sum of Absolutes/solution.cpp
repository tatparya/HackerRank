#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

long long int find(long long int A[100000], long long int L,long long int R)
{
    long long int sum = 0;
    //cout << "Sum" << endl;
    for ( long long int i = L ; i <= R; i++ )
    {
        sum = abs(sum + A[i]);
        //cout << sum << endl;
    }
    return sum;
}

int main() 
{
	long long int array[ 100000 ];
	long long int n;
	long long int q;
	long long int L;
	long long int R;

	cin >> n >> q;
	for( long long int i = 0; i < n; i++ )
	{
		cin >> array[i];
	}

	for( long long int i = 0; i < q; i++ )
	{
		cin >> L >> R;
		if( find( array, L - 1, R - 1 ) % 2 == 0 )
			cout << "Even" << endl;
		else
			cout << "Odd" << endl;
	}

    return 0;
}
