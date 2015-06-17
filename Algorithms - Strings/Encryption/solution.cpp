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
    int length = str.length();
    int rows = floor( sqrt( length ) );
    int cols = ceil( sqrt( length ) );

    if( rows * cols < length )
    {
    	rows = cols;
    }

    cout << rows << " " << cols << endl;
    int i;
    for( i = 0; i < cols; i++ )
    {
    	cout << i << endl << cols << endl;
    	for( int j = 0; j < rows; j++ )
    	{
 			cout << i << " " << j << " " << i + j * cols << endl;
    		cout << str[ i + j * cols ] << endl;
    	}
    	cout << " " << endl;
    }

    cout << endl;

    cout << "HERE!!" << endl;

    cout << endl << i << " " << cols << endl;
}
