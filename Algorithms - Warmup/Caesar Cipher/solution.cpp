#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int crypt( int character, int key )
{
    int ciphered;
    // Cipher character
    if( character < 91 )
    {
        //  Capital chars
        if( character + key > 90 )
        {
            //  Overflow
            ciphered = 64 + ( character + key - 90);
        }
        else if( character + key < 65 )
        {
            //  UnderFlow
            ciphered = 91 - ( 65 - character - key );
        }
        else
        {
            ciphered = character + key;
        }
    }
    else
    {
        //  Small chars
        if( character + key > 122 )
        {
            //  Overflow
            ciphered = 96 + ( character + key - 122);
        }
        else if( character + key < 97 )
        {
            //  Underflow
            ciphered = 123 - ( 97 - character - key );
        }
        else
        {
            ciphered = character + key;
        }
    }

    return ciphered;
}

int main() 
{
	int n;
	int k;	
	char string[100];

	//	Get string
	cin >> n;
	cin >> string;
	cin >> k;

	//	Cipher text
	for( int i = 0; i < n; i++ )
	{
		if( isalpha( string[i] ) )
			string[i] = crypt( string[i], k % 26 );
	}

	cout << string;
    return 0;
}