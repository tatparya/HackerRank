import os

def compressString( string ):
	i = 0
	count = 1
	current = string[0]

	while i < len( string ) - 1:

		current = string[i]
		if current == string[i + 1]:
			count += 1
		else:
			#	print
			print( (count, int(current) ), end=" " )
			#	reset count
			count = 1

		i+=1

	print( (count, int(string[len(string) - 1]) ))

def main():
	string = input()
	compressString( string )

if __name__ == "__main__":
	main()
