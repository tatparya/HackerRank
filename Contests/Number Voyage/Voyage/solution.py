import os
import math

def getT( v, u, a ):
	t = ( v - u ) / a
	return t

def getV( u, a, s ):
	v = math.sqrt( u * u + 2 * a * s )
	return v

def getS( u, a, t ):
	s = u * t + 1 / 2 * a * t * t
	return s

def main():

	totalDist = math.pow( 10, 20 )
	s = totalDist / 3

	a1 = 150
	a2 = 0
	a3 = -150

	print( "Total dist : ", totalDist )

	#	First part
	u1 = 0
	v1 = getV( u1, a1, s )
	t1 = getT( v1, u1, a1 )

	#	Second part
	u2 = v1
	v2 = u2
	t2 = s / u2

	#	Third part
	t3 = t1

	#	Result
	totalTime = t1 + t2 + t3

	avgSpeed = totalDist / totalTime

	print( "Average speed : ", avgSpeed )

if __name__ == "__main__":
	main()
