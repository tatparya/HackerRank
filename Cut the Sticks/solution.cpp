#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int comapre( const void * a, const void * b )
{
	return -( *(int*)a - *(int*)b );
}

void printArray( int numElements, int * array )
{
	for( int i = 0; i < numElements; i++ )
	{
		printf( "%d ", array[i] );
	}
	printf( "\n" );
}

void cutTheSticks( int * array, int numElements )
{
	int smallest;
	int count = 0;
	qsort( array, numElements, sizeof( int ), comapre );
	printArray( numElements, array );

	for( int i = numElements - 1; i >= 0; i-- )
	{
		count = 1;
		smallest = array[i];
		while( array[i-1] == smallest )
		{
			count++;
			i--;
		}
		cout << count << endl;
		numElements -= count;
		printArray( numElements, array );
	}
}


int main() 
{
	int numElements;
	int scan;
	int array[1001];
	scan = scanf( "%d", &numElements );
	for( int i = 0; i < numElements; i++ )
	{
		cin >> array[i];
	}

	cutTheSticks( array, numElements );

    return 0;
}