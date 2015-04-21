#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void printArray( int numElements, int * array )
{
	for( int i = 0; i < numElements; i++ )
	{
		printf( "%d ", array[i] );
	}
	printf( "\n" );
}

void insertIntoArray( int numElements, int * array )
{
	int element = array[ numElements - 1 ];
	int elementPosition = numElements - 1;
	while( array[ elementPosition - 1 ] > element && elementPosition != 0 )
	{
		array[ elementPosition ] = array[ elementPosition - 1 ];
		elementPosition--;
	}

	array[ elementPosition ] = element;
}

int main() 
{
	int numElements;
	int array[1001];

	//	Get elements
	cin >> numElements;
	for( int i = 0; i < numElements; i++ )
	{
		cin >> array[i];
	}

	for( int i = 1; i < numElements; i++ )
	{
		insertIntoArray( i + 1, array );
		printArray( numElements, array );
	}

    return 0;
}
