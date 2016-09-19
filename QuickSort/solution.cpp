#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//    Author: Tatparya Shankar

void sort( int * array, int start, int end )
{
    int pivot = end;
    int wall = start;
    int itr = start;
    int temp;

    cout << "Start = " << start << endl;
    cout << "End = " << end << endl;
    cout << "Sorting array : " << endl;
    for( int i = start; i < end; i++ )
    {
        cout << array[i] << " ";
    }
    cout << endl;

    if( end - start <= 0 )
    {
        return;
    }

    while( itr < pivot )
    {
        //  Check if pivot is greater than itr
        if( array[itr] < array[pivot] )
        {
            if( itr != wall )
            {
                //  Swap itr with new wall
                temp = array[itr];
                array[itr] = array[wall];
                array[wall] = temp;
            }
            wall++;
        }
        itr++;
    }
    //  Swap wall with pivot
    temp = array[wall];
    array[wall] = array[pivot];
    array[pivot] = temp;

    cout << "Wall : " << wall << endl;

    //  Sort left half
    sort( array, start, wall - 1 );
    //  Sort right half
    sort( array, wall + 1, end );
}

void quickSort( int * array, int length )
{
    sort( array, 0, length - 1 );
}

int main()
{
    int length;
    cin >> length;

    int array[length];

    //    Get array input
    for( int i = 0; i < length; i++ )
    {
        cin >> array[i];
    }

    cout << "Input Array : " << endl;
    for( int i = 0; i < length; i++ )
    {
        cout << array[i] << " ";
    }
    cout << endl;

    quickSort( array, length );

    //    Output sorted array
    cout << "Sorted Array : " << endl;
    for( int i = 0; i < length; i++ )
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
