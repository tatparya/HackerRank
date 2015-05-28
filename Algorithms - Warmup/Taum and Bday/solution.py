import os
	
def getResult():
	#	Get all inputs
	b, w = map( int, input().split() )
	x, y, z = map( int, input().split() )

	#	Calculations
	total = 0

	if x > y + z:
		total += ( y + z ) * b
		total += y * w

	elif y > x + z:
		total += ( x + z ) * w
		total += x * b

	else:
		total += b * x + w * y

	print( total )


def main():
	t = int( input() )
	for i in range( t ):
		getResult()

	
if __name__ == "__main__":
	main()
