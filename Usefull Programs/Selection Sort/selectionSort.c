#include <stdlib.h>
#include <stdio.h>

#define MAX 100

void ssort( int array[MAX], int n )
{
	int i;
	int j;
	int position;
	int temp;

	for( i = 0; i<n-1; i++ )
	{
		position = i;
		for ( j = i+1; j < n; j++ )
		{
			if( array[position] > array[j] )
			{
				position = j;
			}
		}
		if ( position != i )
		{
			temp = array[i];
			array[i] = array[position];
			array[position] = temp;
		}
	}
}

int main(int argc, char const *argv[])
{
	int array[MAX];
	int n;			// For number of elements in array
	int i = 0;		// For loops
	int j = 0;		// For loops

	//	Input the array of numbers
	printf("Input number of elements in array less than 100\n");
	scanf("%d", &n);

	printf("Enter the elements of the array");
	for ( i=0; i<n; i++ )
	{
		scanf("%d", &array[i]);
	}

	//	Sort elements

	ssort(array, n);

	//	Printf array
	
	return 0;
}