#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void next_move(int posr, int posc, vector <string> board) {
    
	//	Check if current position is clean
	if( board[posr][posc] == 'd' )
	{
		//	Clean
		cout << "CLEAN" << endl;
		return;
	}

    //	Go over entire grid
    if( posr % 2 == 0 )
    {
    	if( posc < 4 )
    	{
    		cout << "RIGHT" << endl;
    	}
    	else
    	{
    		cout << "DOWN" << endl;
    	}
    }
    else
    {
    	if( posc > 0 )
    	{
    		cout << "LEFT" << endl;
    	}
    	else
    	{
    		cout << "DOWN" << endl;
    	}
    }
}

int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}