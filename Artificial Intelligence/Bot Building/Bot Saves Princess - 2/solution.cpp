#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar


void nextMove(int n, int r, int c, vector <string> grid){

	vector <int> princessLoc;
	vector <int> botLoc;

	botLoc.push_back( r );
	botLoc.push_back( c );

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
		}
	}

	int yMoves = princessLoc[0] - botLoc[0];
	int xMoves = princessLoc[1] - botLoc[1];

	if( yMoves < 0 )
	{
		cout << "UP" << endl;
	}
	else if( yMoves > 0 )
	{
		cout << "DOWN" << endl;
	}

	else if( xMoves < 0 )
	{
		cout << "LEFT" << endl;
	}
	else if( xMoves > 0 )
	{
		cout << "RIGHT" << endl;
	}
}

int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}