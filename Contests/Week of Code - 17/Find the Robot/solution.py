import os

def sumAP( n, a, d ):
	sum = ( n / 2 ) * ( 2 * a + ( n - 1 ) * d )
	return int( sum )

def getRobotLoc():

	move = 0
	numMoves = int( input() )
	n = int( numMoves / 4 )
	extraSteps = numMoves % 4

	right = sumAP( n, 1, 4 )
	up = sumAP( n, 2, 4 )
	left = sumAP( n, 3, 4 )
	down = sumAP( n, 4, 4 )

	if extraSteps == 1:
		right += numMoves
	elif extraSteps == 2:
		up += numMoves
		right += numMoves - 1
	elif extraSteps == 3:
		left += numMoves
		up += numMoves - 1
		right += numMoves - 2

	locX = right - left
	locY = up - down

	print( locX, locY )

def main():

	numTestCases = int( input() )
	for i in range( numTestCases ):
		getRobotLoc()

if __name__ == "__main__":
	main()
