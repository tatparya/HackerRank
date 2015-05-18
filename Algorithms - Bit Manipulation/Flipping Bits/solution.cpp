#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numTest;
    unsigned int num;
    
    cin >> numTest;
    for( int i = 0; i < numTest; i++ )
    {
        cin >> num;
        cout << 4294967295 - num << endl;
    }
    return 0;
}
