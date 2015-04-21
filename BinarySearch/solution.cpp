#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int binarySearch( int element, int numElements, int * array )
{
	int beg = 0;
	int end = numElements - 1;
	int mid;
	int found = 0;
	int index;

	while( beg <= end && !found )
	{
		mid = ( beg + end ) / 2;
		//cout << beg<< " "<< end<<" "<< mid<< endl;
		if( array[ mid ] == element )
		{
			found++;
			index = mid;
		}

		else if( array[mid] > element )
		{
			//	Reset end
			end = mid - 1;
		}

		else
		{
			//	Reset beg
			beg = mid + 1;
		}

	}

	if( !found )
	{
		return -1;
	}
	else
	{
		return index;
	}
}

int main() 
{
	int element;
	int numElements;
	int array[1001];

	//	Get inputs
	cin >> element;
	cin >> numElements;
	for( int i = 0; i < numElements; i++ )
	{
		cin >> array[i];
	}

	//	Search and print
	cout << binarySearch( element, numElements, array );

    return 0;
}
