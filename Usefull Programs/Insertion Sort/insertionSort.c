#include <stdlib.h>
#include <stdio.h>

#define MAX 100

void isort( int array[MAX], int n )
{
	int i;
	int j;
	int temp;

	for ( i = 1; i<n; i++ )
	{
		temp = array[i];
		j=i;
		while ( j > 0 && A[j-1] > temp )
		{
			array[j] = array[j-1];
			j = j-1;
		}
		array[j] = x;
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

	isort(array, n);

	//	Printf array
	
	return 0;
}