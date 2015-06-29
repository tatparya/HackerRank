#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int main() 
{
	long long int n, p, x;
	cin >> n >> p >> x;
	long long int score;
	long long int rating;
	long long int maxRating = 0;
	long long int maxId = 1;
	for( long long int i = 0; i < n; i++ )
	{
		cin >> score;
		rating = p * score;
		if( rating > maxRating )
		{
			maxRating = rating;
			maxId = i + 1;
		}
	}

	cout << maxId << endl;
    return 0;
}
