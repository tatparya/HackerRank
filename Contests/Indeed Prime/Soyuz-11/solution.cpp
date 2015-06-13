#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void printSpaceship( int size )
{
	string body = 	"  ||";
	string wings = 	"|:||:|";

	cout << "  /\\" << endl;
	for( int i = 0; i < size; i++ )
	{
		cout << body << endl;
	}
	cout << " /||\\\n/:||:\\" << endl;
	for( int i = 0; i < size - 1; i++ )
	{
		cout << wings << endl;
	}
	cout << "|/||\\|\n  **\n  **";
}

int main() 
{
	int size;
	cin >> size;
	printSpaceship( size );
    return 0;
}
