#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

int main()
{
		int n;
		int sum = 0;
		int num;
		cin >> n;

		for( int i = 0; i < n; i++ )
		{
				cin >> num;
				sum += num;
		}

		cout << sum << endl;
    return 0;
}
