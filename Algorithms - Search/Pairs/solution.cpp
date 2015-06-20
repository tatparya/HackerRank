#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int cmpfunc (const void * a, const void * b)
{
    return ( *(long long int*)a - *(long long int*)b );
}

void printArr( long long int * arr, int n )
{
	for( int i = 0; i < n; i++ )
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() 
{
	int n;
	long long int k;
	long long int arr[ 100000 ];
	cin >> n >> k;
	for( int i = 0; i < n; i++ )
	{
		cin >> arr[ i ];
	}

	//	Sort arr
	qsort( arr, n, sizeof( long long int ), cmpfunc );

	//printArr( arr, n );

	//	Get count
	int count = 0;
	int start = 0;
	int end = 1;
	while( start < n - 1 && end < n )
	{
		while( end < n && arr[end] - arr[start] < k )
		{
			end++;
			//cout << "END = " << end << endl;
		}
		if( arr[end] - arr[start] == k )
		{
			count++;
			start++;
			end++;
		}
		if( arr[end] - arr[start] > k )
		{
			start++;
		}

		//cout << "Start = " << start << endl;
		//cout << "END = " << end << endl;
		//cout << "Count = " << count << endl;
	}

	cout << count << endl;
    return 0;
}
