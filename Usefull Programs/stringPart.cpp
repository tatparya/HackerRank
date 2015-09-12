#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

//	Check if given two strings, one is a part of another
void checkPermutation( char * input, char * other )
{
	int len1 = strlen( input ) - 1;
	int len2 = strlen( other ) - 1;
	//cout << "len1 : "<< len1 << endl;
	//cout << "len2 : "<< len2 << endl;
	int i = 0;
	int found = 0;
	int j = 0;
	int k = 0;

	while( i < len1 && !found )
	{
		j = 0;
		k = i;
		while( j < len2 && k < len1 && input[k] == other[j] )
		{
			//cout << "string : " << input[k] << endl;
			j++;
			k++;

			//cout << "j : " << j << endl << "k : " << k << endl;
		}
		if( j == len2 )
		{
			found++;
		}
		i++;
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
