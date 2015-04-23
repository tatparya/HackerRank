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

void isClassCanceled()
{
	int numStudents;
	int scan;
	int reqd;
	int present = 0;
	int student[1001];
	cin >> numStudents;
	cin >> reqd;
	for( int i = 0; i < numStudents; i++ )
	{
		cin >> student[i];
	}

	for( int j = 0; j < numStudents && present < reqd; j++ )
	{
		if( student[j] <= 0 )
		{
			present++;
		}
	}

	( present < reqd ? cout << "YES" << endl : cout << "NO" << endl );
}

int main() 
{
	int numTestCases;
	int scan;
	int array[1001];
	scan = scanf( "%d", &numTestCases );
	for( int i = 0; i < numTestCases; i++ )
	{
		isClassCanceled();
	}


    return 0;
}