import os

def printRangoli( size ):

	if size == 1:
		print( 'a' )
		return

	for i in range( size ):
		#print( chr( ord('a') + i ))
		for j in range( 0, size - 1 - i ):
			print( "--", end="" )
		for k in ( range( 0, i + 1 ) ):
			print( chr( ord('a') + size - k - 1 ), "-", end="", sep="")

		for l in reversed( range( 0, i ) ):
			print( chr( ord('a') + size - l - 1 ), end="", sep="")
			if l != 0:
				print( "-", end = "", sep ="" )

		for l in range( 0, size - 1 - i -1 ):
			print( "--", end="" )
		if i == 0:
			print( "-", end="" )
		elif i != size - 1:
			print( "--", end="" )
		print( "" )

	for i in range( size - 1 ):
		for j in range( 0, i + 1 ):
			print( "--", end="", sep="" )
		for k in range( 0, size - i - 1 ):
			print( chr( ord('a') + size - k - 1 ), "-", end="", sep="" )

		for k in reversed(range( 1, size - i - 1 )):
			print( chr( ord('a') + size - k ), "-", sep="", end="" )
		for j in range( 0, i + 1 - 1 ):
			print( "--", end="" )

		print( "-", end="" )

		print( "" )


def main():
	n = int( input() )
	printRangoli( n )

if __name__ == "__main__":
	main()
