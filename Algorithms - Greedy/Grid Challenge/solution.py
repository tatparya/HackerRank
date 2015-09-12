import os
import math

def getAnswer():
	n = int( input() )
	grid = []
	for i in range( n ):
		row = ''.join( sorted( input() ) )
		grid.append( row )

	# for i in range( n ):
	# 	print( grid[i] )

	#	Check if horizontally sorted
	for i in range( n - 1 ):
		for j in range( n ):
			if grid[i][j] > grid[i+1][j]:
				print( "NO" )
				return

	print( "YES" )
	return

def main():
	t = int( input() )
	for i in range( t ):
		getAnswer()


if __name__ == "__main__":
	main()
