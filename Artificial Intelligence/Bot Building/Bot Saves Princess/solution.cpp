#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar


void displayPathtoPrincess( int n, vector <string> grid )
{
    vector <int> princessLoc;
	vector <int> botLoc;

    for( int i = 0; i < n; i++ )
	{
		for( int j = 0; j < n; j++ )
		{
			//	Check if princess / bot
			if( grid[i][j] == 'p' )
			{
				princessLoc.push_back( i );
				princessLoc.push_back( j );
			}

			if( grid[i][j] == 'm' )
			{
				botLoc.push_back( i );
				botLoc.push_back( j );
			}
		}
	}

	//cout << botLoc[0] << ", " << botLoc[1] << endl;
	//cout << princessLoc[0] << ", " << princessLoc[1] << endl;

	int yMoves = princessLoc[0] - botLoc[0];
	int xMoves = princessLoc[1] - botLoc[1];

	//cout << xMoves << endl << yMoves << endl;

	for( int i = 0; i < abs(yMoves); i++ )
	{
		if( yMoves < 0 )
		{
			cout << "UP" << endl;
		}
		else
		{
			cout << "DOWN" << endl;
		}
	}

	for( int i = 0; i < abs(xMoves); i++ )
	{
		if( xMoves < 0 )
		{
			cout << "LEFT" << endl;
		}
		else
		{
			cout << "RIGHT" << endl;
		}
	}
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}