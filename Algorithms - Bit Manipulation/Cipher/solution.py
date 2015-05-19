import os

def xor( a, b ):
	if a == b:
		return '0'
	else:
		return '1'

def main():
	n, k = map( int, input().split() )
	code = input()

	message = code[0]

	i = 1
	prev = message
	while i < n:
		if( code[i] == '1' ):
			num = xor( prev, '1' )
			message += num

		if( code[i] == '0' ):
			message += prev

		prev = xor( prev, message[i] )

		#	Handling case where i > k
		if i > k - 2:
			prev = xor( prev, message[ i - k + 1 ] )
		i += 1
		
	print( message )

if __name__ == "__main__":
	main()
