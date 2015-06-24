#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    //  Get input
    string str;
    cin >> str;

    //	Calculate num Rows and Columns
    int length = str.length();
    int rows = floor( sqrt( length ) );
    int cols = ceil( sqrt( length ) );

    if( rows * cols < length )
    {
    	rows = cols;
    }

    //	Go over each column
    for( int i = 0; i < cols; i++ )
    {
    	//	Go over each row
    	for( int j = 0; j < rows; j++ )
    	{
 			//	Check for boundary conditions
    		if( i + j * cols < length )
            {
                cout << str[ i + j * cols ];
            }
    	}
    	cout << " ";
    }

    cout << endl;
}
