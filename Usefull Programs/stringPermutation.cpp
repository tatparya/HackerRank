#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

//	Check if given two strings, one is a part of another
void checkPermutation( char * string, char * other )
{
	int len1 = strlen( string );
	int len2 = strlen( other );
	int i = 0;
	int found = 0;
	int j = 0;
	int k = 0;

	while( i < len1 && !found )
	{
		j = 0;
		k = i;
		while( j < len2 && input[k] == other[j] )
		{
			j++;
			k++;
		}
		if( j == len2 )
		{
			found++;
		}
	}
	( found ? cout << "Yes" << endl : cout << "No" << endl );
}

int main()
{
	char string[100];
	char other[100];
	cout << "Enter string : ";
	//	scanf( "%s", string );
	fgets( string, 100, stdin );
	cout << "Enter another string : ";
	fgets( other, 100, stdin );
	checkPermutation( string, other );
    return 0;
}
