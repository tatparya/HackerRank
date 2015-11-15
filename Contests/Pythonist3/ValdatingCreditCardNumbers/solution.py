import os
import re

def isValid( string ):
	#print( string )
	pattern = r'((\d){4})-?(\d){4}-?(\d){4}-?(\d){4}'
	matchObj = re.match( pattern, string )
	if matchObj :
		#print( matchObj )
		#	Check repetetions
		i = 0
		current = string[0]
		count = 1
		while i < len( string ) - 1:
			current = string[i]
			next = string[i + 1]
			j = 1
			while( not next.isnumeric() ):
				next = string[ i + j ]
				j += 1
			if current.isnumeric():
				if current == next:
					count += 1
					#print( "here", current, count )
					if count >= 3:
						print( "Invalid" )
						return
				else:
					#print( current, count )
					if count >= 4:
						print( "Invalid" )
						return
					count = 0
			i += 1
		print( "Valid" )
	else:
		print( "Invalid" )

def main():
	n = int( input() )
	for i in range( n ):
		string = input()
		isValid( string )

if __name__ == "__main__":
	main()
