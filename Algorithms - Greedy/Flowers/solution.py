import os
import math

def main():

	#	Get inputs
	n, k = map( int, input().split() )
	prices = list( map( int, input().split() ) )

	#	Sort prices
	prices.sort()

	numRepeated = n % k
	numRepetetions = math.floor( n / k )

	# print( "Num left : ", numRepeated )
	# print( "Num repetetions : ", numRepetetions )

	i = 0
	j = numRepetetions
	total = 0
	num = 0
	repeats = 0

	while i < numRepeated:
		# print( "i : ", i )
		# print( "buying : ", prices[i], " at : ", ( j + 1 ) * prices[i] )
		total += ( j + 1 ) * prices[i]
		i += 1

	while i < n:
		# print( "i : ", i )
		repeats = 0
		while repeats < k:
			# print( "repeats : ", repeats )
			# print( "buying : ", j, " at : ", j * prices[i] )
			total += ( j ) * prices[i]
			repeats += 1
			i += 1
		j -= 1

	print( total )
	#print( "Num bought : ", num )

if __name__ == "__main__":
	main()
