#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar
//	Implementation : Integer Partitioning

void printArray( int * array, int length )
{
	cout << "Array :";
	for( int i = 0; i < length; i++ )
	{
		cout << " " << array[i];
	}
	cout << endl;
}

void partitionAll_fn( int * array, int index, int value )
{
	cout << "Partitioning : " << value << endl;
	cout << "Index : " << index << endl;
	//	Check for base case
	if( value > 0 )
	{
		//	Recursive case
		for( int val = 1; val <= value; val++ )
		{
			array[index] = val;
			partitionAll_fn( array, index + 1, value - val );
		}
	}
	else if( value == 0 )
	{
		//	Base case
		cout << "Partioned array : " << endl;
		printArray( array, index );
		cout << endl;
	}
}

void partitionAll( int value )
{
	int * array;
	int index = 0;

	//	Allocate array to value, since biggest partiton is all ones
	array = (int *) malloc( sizeof( int ) * value );

	//	Partition funciton call
	partitionAll_fn( array, index, value );

	//	Free memory allocated
	free( array );
}

int main()
{
	int n;
	cout << "Enter partition value : ";
	cin >> n;
	partitionAll( n );
    return 0;
}
