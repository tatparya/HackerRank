#include <stdlib.h>
#include <stdio.h>

#define MAX 100000

//	Compare function to compare two elements
int cmpfunc (const void * a, const void * b)
{
    return ( *(long long int*)a - *(long long int*)b );
}

int main() 
{
	int n;
	int arr[ MAX ];
	cin >> n >> k;
	for( int i = 0; i < n; i++ )
	{
		cin >> arr[ i ];
	}

	//	Sort arr
	qsort( arr, n, sizeof( int ), cmpfunc );

	/*
		1. Array to be sorted
		2. Size of array
		3. Size of an element in the array
		4. Compare Function
	*/

	printArr( arr, n );

    return 0;
}