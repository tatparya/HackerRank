import os

def getResult():
	#	Get inputs
	nRows, nCols = map( int, input().split() )
	#	Get grid
	grid = []
	for i in range( nRows ):
		grid.append( input() )

	nPatRows, nParCols = map( int, input().split() )
	#	Get pattern
	pattern = []
	for j in range( nPatRows ):
		pattern.append( input() )

	#	Find pattern in grid
	i = 0
	found = 0
	while i < nRows :
		result = grid[i].find( pattern[0] )
		if result != -1:
			#	Look for rest of pattern
			j = 0
			while j < nPatRows and result != -1 :
				#print( i, j )
				#print( grid[i], pattern[j] )
				result = grid[i].find( pattern[j] )
				i += 1
				j += 1

			if j == nPatRows and result != -1:
				found = 1
		i += 1

	if found:
		print( "YES" )
	else:
		print( "NO" )

def main():
	t = int( input() )
	for i in range( t ):
		getResult()
	
if __name__ == "__main__":
	main()
