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
		{
			//	Incremend by 2
			if( string[i] < 91 )
			{
				if( string[i] + k > 90 )
				{
					string[i] += k % 91 + 65;
				}
				else if( string[i] + k < 65 )
				{
					string[i] = 90 - 64 % ( string[i] + k );
				}
			}
			else
			{
				if( string[i] + k > 122 )
				{
					string[i] += k % 123 + 97;
				}
				else if( string[i] + k < 97 )
				{
					string[i] = 122 - 96 % ( string[i] + k );
				}
			}
		}
	}

	cout << string;
    return 0;
}