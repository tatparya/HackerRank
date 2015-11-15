import os

def printTriangle( size ):
	for i in range( size ):
		for j in range( i + 1 ):
			print( j + 1, end="" )
		k = i
		while k != 0:
			print( k, end ="" )
			k-=1
		print( "" )

def main():
	n = int( input() )
	printTriangle( n )

if __name__ == "__main__":
	main()
