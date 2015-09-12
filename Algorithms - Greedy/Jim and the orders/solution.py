import os

class Order:
	def __init__( self, pos, t, d ):
		self.pos = pos
		self.time = t + d

	def printPos( self ):
		print( self.pos, end=" " )

	def getTime( self ):
		return self.time

	def printTime( self ):
		print( self.time )

def main():
	n = int( input() )
	times = []
	#	Get all inputs and sort ( insertion sort )
	for i in range( n ):
		t, d = list( map( int, input().split() ) )
		order = Order( i + 1, t, d )
		times.append( order )
		x = i

		while x > 0 and times[x].getTime() < times[x-1].getTime():
			#	Swap
			temp = times[x-1]
			times[x-1] = times[x]
			times[x] = temp
			x -= 1

	for o in times:
		o.printPos()

if __name__ == "__main__":
	main()
