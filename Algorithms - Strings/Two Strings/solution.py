import os
import sys
import string

def getResult():

	str1 = input()
	str2 = input()

	for letter in str1:
		if letter in str2:
			print( "YES" )
			return

	print( "NO" )

def main():
    
    numTestCases = int( input() )

    for i in range( numTestCases ):
    	getResult()
    
if __name__ == "__main__":
    main()
