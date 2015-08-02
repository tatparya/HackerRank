import os
import math

def main():
	n, k = map( int, input().split() )
	ids = list( map( int, input().split() ) )
	ids.sort()

	print( n, k )
	print( ids )

	total = 0
	first = 0
	last = n + 1

	i = 0

    #   Mid intervals    
	while i < k - 1:

		first = ids[i]
		next = ids[i+1]

		total += math.ceil( ( next - first - 1 - 2 ) / 2 )

		i += 1
        
	#   First interval
	firstInt =  math.ceil( ( ids[0] - 1 - 1 ) / 2 )
	print( "first = ", firstInt )
	if firstInt > 0:
		total += firstInt
    
    #   Last interval
	lastInt = math.ceil( ( n + 1 - ids[k-1] - 1 - 1 ) / 2 )
	print( "last = ", lastInt )
	if lastInt > 0:
		total += lastInt

	print( total + k )

if __name__ == "__main__":
	main()
