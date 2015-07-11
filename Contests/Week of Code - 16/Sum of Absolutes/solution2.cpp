#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int find( int A[100000], int L,int R)
{
    int sum = 0;
    //cout << "Sum" << endl;
    for ( int i = L ; i <= R; i++ )
    {
        sum = abs(sum + A[i]);
        //cout << sum << endl;
    }
    return sum;
}

int main() 
{
	int array[ 100000 ];
	int n;
	int q;
	int L;
	int R;

	cin >> n >> q;
	for(	int i = 0; i < n; i++ )
	{
		cin >> array[i];
	}

	for(	int i = 0; i < q; i++ )
	{
		cin >> L >> R;
		if( isEven( array, L, R) )
			cout << "Even" << endl;
		else
			cout << "Odd" << endl;
	}

    return 0;
}
