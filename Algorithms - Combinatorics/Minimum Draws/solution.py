import os

def getResult():
	n = int( input() )
	print( n + 1 )

def main():
	t = int( input() )
	for i in range( t ):
		getResult()

if __name__ == "__main__":
	main()
