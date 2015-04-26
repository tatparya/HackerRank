#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int isLess( int map[101][101], int i, int j, int size )
{
	if( i == 0 || j == 0 || i == size - 1 || j == size - 1 )
		return 0;
	
	int top = map[i][j-1];
	int bottom = map[i][j + 1];
	int left = map[i-1][j];
	int right = map[i+1][j];
	int cell = map[i][j];

	if( cell > top && cell > bottom && cell > left && cell > right )
		return 1;
	else
		return 0;
}

void getCavities( int size )
{
	char line[101];
	int map[101][101];

	//	Scan map
	for( int i = 0; i < size; i ++ )
	{
		cin >> line;
		for( int j = 0; j < size; j++ )
		{
			map[i][j] = (int) line[j] - 48;
		}
	}

	for( int i = 0; i < size; i++ )
	{
		for( int j = 0; j < size; j++ )
		{
			if( isLess( map, i, j, size ) )
				cout << "X";
			else
				cout << map[i][j];
		}
		cout << endl;
	}
}

int main() 
{
	int size;
	int scan;
	scan = scanf( "%d", &size );
	getCavities( size );
    return 0;
}