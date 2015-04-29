import os
import sys

def getSong():
	pi = "31415926535897932384626433833"
	string = ''
	line = input()
	words = line.split()
	for word in words:
		string += str( len( word ) )

	length = len( string )

	if string in pi [:length] :
		print( "It's a pi song." )
	else:
		print( "It's not a pi song." )
	

def main():
	t = int( input() )
	for i in range( t ):
		getSong()

if __name__ == "__main__":
	main()
