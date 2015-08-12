import os
import math

def getF1( p, q, a, b ):
	f1 = ( p - a ) / ( q + b )
	return f1

def getF2( p, q, a, b ):
	f2 = ( p + b ) / ( q - a )
	return f2

def main():

	p = 10010101
	q = 11111117

	sum = 0

	for a in range( p + q ):
		for b in range( p + q ):
			print( a, b )
			if getF1 == getF2:
				sum += a + b

	print( sum )

if __name__ == "__main__":
	main()
