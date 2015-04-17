import os

def solution():
	x = int( input() )
	y = int( input() )
	z = int( input() )
	n = int( input() )

	finalList = []
	for xi in range( x + 1 ):
		for yi in range( y + 1 ):
			for zi in range( z + 1 ):
				if xi + yi + zi != n:
					listItem = [ xi, yi, zi ]
					finalList.append( listItem )

	print( finalList )

def main():
	solution()

if __name__ == "__main__":
	main()
