import os

def findWays( numWays, coins, numAvail, total ):

	if total == 0:
		return 1
	elif total < 0 or numAvail == 0:
		return 0

	if numWays[ total-1 ][ numAvail-1 ] != -1:
		return numWays[ total-1 ][ numAvail-1 ];

	ways = 0
	ways += findWays( numWays, coins, numAvail, total - coins[numAvail - 1] ) + findWays( numWays, coins, numAvail - 1, total )

	numWays[ total-1 ][ numAvail-1 ] = ways;

	return ways

def main():
	total, numCoins = map( int, input().split() )
	coins = list( map( int, input().split() ))
	numWays = [[-1 for x in range(numCoins)] for y in range(total)]
	ways = findWays( numWays, coins, numCoins, total )
	print( ways )

if __name__ == "__main__":
	main()
