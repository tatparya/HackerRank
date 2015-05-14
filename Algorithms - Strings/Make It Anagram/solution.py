import os
import sys
import string

def getResult( str1, str2 ):

	num = 0
	visited = []

	for ch in str1:
		if ch not in visited:
			if ch not in str2:
				num += str1.count( ch )
				visited.append( ch )

			else:
				#	Count in str1, count in str2 add in visited
				diff = str1.count( ch ) - str2.count( ch )
				visited.append( ch )
				if diff > 0 :
					num += diff
				elif diff < 0 :
					num -= diff

	for ch in str2:
		if ch not in visited:
			if ch not in str1:
				num += str2.count( ch )
				visited.append( ch )

			else:
				diff = str2.count( ch ) - str2.count( ch )
				visited.append( ch )
				if diff > 0:
					num += diff
				elif diff < 0:
					num -= diff

	print( num )


def main():
    
    string1 = input()
    string2 = input()

    getResult( string1, string2 )
    
if __name__ == "__main__":
    main()
