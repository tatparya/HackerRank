import os

def main():
	#	Get inputs a, b, n
	a,b,n = map( int, input().split() )

	i = 0
	tnmin1 = b
	tnmin2 = a
	while i < n:
		number = tnmin1 * tnmin1 + tnmin2
		tnmin2 = tnmin1
		tnmin1 = number
		i++

	print( number )

if __name__ == "__main__":
	main()
