#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getResult()
{
	int m;
	int n;

	cin >> m >> n;

	vector<int> flavors;
    vector<int> choice;
	int element;
    int found = 0;
    
	for( int i = 0; i < n; i++ )
	{
		//	Go over all flavors
		cin >> element;
		int j = 0;
        while( j < flavors.size() && !found )
		{
			//cout << element << " & " << flavors[j] << endl;
            if( element + flavors[j] == m )
			{
				choice.push_back( j + 1 );
                choice.push_back( i + 1 );
                found = 1;
			}
            
            j++;
		}

		flavors.push_back( element );
	}
    
    cout << choice[0] << " " << choice[1] << endl;
}

int main() 
{
	int t;
	
	cin >> t;
	while( t > -1 )
	{
		t--;
		getResult();
	}
    return 0;
}
