import os

def getMaxSubarray():
	length = int( input() )
	array = input().split()
	
	#	contiguous  Sum
	bestSum = 0;
	currentSum = 0;
	starInd = -1;
	endInd = -1;

	for i in range( length ):
		sum = currentSum + int( array[i] )
		
		if sum > 0:
			currentSum = sum

		else:
			currentSum = 0

		if bestSum < currentSum:
			bestSum = currentSum
	
	#	Non contiguous sum
	array.sort()

	sum = 0
	for element in array:
		if( int( element ) > 0 ):
			sum += int( element )

	#	Handling all negatives
	if sum == 0 or bestSum == 0:
		sum = array[0]
		bestSum = sum

	print( bestSum, sum )


def main():
	numTestCases = int( input() )
	for i in range( numTestCases ):
		getMaxSubarray()

if __name__ == "__main__":
	main()
