#include <cmath>
#include <cstdio>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar
//	Program to implement the standard library hash map

void addElement( map< string, int > &grade_map )
{
	//	Add new element to map
	string name;
	int grade;
	cout << "Enter student name : ";
	cin >> name;
	cout << "Enter student grade : ";
	cin >> grade;

	grade_map[ name ] = grade;
}

void printAll( map< string, int > grade_map )
{
	//	Print all elements in map
	cout << "Printint elements : " << endl;
	map< string, int >::iterator itr;
	for( itr = grade_map.begin(); itr != grade_map.end(); itr++ )
	{
		cout << itr -> first << " : " << itr -> second << endl;
	}
}

int main()
{
	int input = 1;
	map< string, int > grade_map;

	while( input != 0 )
	{
		cout << "1: Add new element\n2: Show all elements\n0: Exit" << endl;
		cin >> input;

		switch( input )
		{
			case 1:	addElement( grade_map );
					break;
			case 2:	printAll( grade_map );
					break;
			default:break;
		}
	}
	return 0;
}
