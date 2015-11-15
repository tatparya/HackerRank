import os

def capitalizeWords( string ):
	#	Capitalize first letter
	if string[0].isalpha():
		print( string[0].upper(), end = "" )
	else:
		print( string[0], end = ""  )

	#	Capitalize each word
	i = 1
	while i < len( string ):
		if string[i].isalpha() and string[i-1].isspace():
			print( string[i].upper(), end = ""  )
		else:
			print( string[i], end = ""  )
		i+=1

def main():
	string = input()
	capitalizeWords( string )

if __name__ == "__main__":
	main()
