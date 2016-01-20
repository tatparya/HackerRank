#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 100000

/*
    Recursive implementation of mergesort
*/

void msort( int * arr, int beg, int end );
void mergeHalves( int * arr, int beg, int mid, int end );
void printArr( int * arr, int beg, int end )
{
    int n = end - beg;
    cout << "---Array---" << endl;
    for( int i = 0; i <= n; i++ )
    {
        cout << arr[ beg + i ] << endl;
    }
}

int main()
{
	int n;
	int arr[ MAX ];
    cout << "Enter number of elements : ";
	cin >> n;
	for( int i = 0; i < n; i++ )
	{
		cin >> arr[ i ];
	}

	//	Sort arr
	msort( arr, 0, n - 1 );

	printArr( arr, 0, n - 1 );

    return 0;
}

//  Merge sort function
void msort( int * arr, int beg, int end )
{
    //  Base case
    if( end <= beg )
        return;

    //  Recursive case
    //  Split into half
    int mid = ( beg + end ) / 2;
    //  Sort each half
    msort( arr, beg, mid );
    msort( arr, mid + 1, end );
    //  Merge halves
    mergeHalves( arr, beg, mid, end );
}

//  Merge helper function
void mergeHalves( int * arr, int beg, int mid, int end )
{
    int i,j,k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    //  Create temp arrays
    int leftPart[n1];
    int rightPart[n2];

    //  Copy data
    for( int i = 0; i < n1; i++ )
        leftPart[i] = arr[ beg + i ];
    for( int i = 0; i < n2; i++ )
        rightPart[i] = arr[ mid + 1 + i ];

    //  Merge data
    i = 0;
    j = 0;
    k = beg;

    while( i < n1 && j < n2 )
    {
        if( leftPart[i] < rightPart[j] )
            arr[ k++ ] = leftPart[i++];
        else
            arr[ k++] = rightPart[j++];
    }
    //  Copy left over
    while( i < n1 )
        arr[k++] = leftPart[i++];
    while( j < n2 )
        arr[k++] = rightPart[j++];
}
