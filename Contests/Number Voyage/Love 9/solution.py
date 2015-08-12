import os
import math

def getTn( n ):
	if n == 1:
		return 1

	return getTn( n - 1 ) + n

def main():

	print( getTn( 99 ) / 99 )



if __name__ == "__main__":
	main()
