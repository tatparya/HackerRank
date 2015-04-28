import os
import sys

def getStones():
	n = int( input() )
	a = int( input() )
	b = int( input() )
	out = []

	for i in range( n ):
		s = a * ( n - i - 1 ) + b * ( i )
		if s not in out:
			out.append( s )

	out.sort()

	for element in out:
		print( element, end=" " )

	print()

def main():
	#	Input list 1
	t = input()
	for i in range( int(t) ):
		getStones()

if __name__ == "__main__":
	main()
