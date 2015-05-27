import os

def calcMax( topics ):
	res = 0
	for num in topics:
		if num == "1":
			res += 1

	return res

def getResult( n, m ):
	teamList = []
	
	#	Get all teams
	for i in range( n ):
		team = int( input(), 2 )
		teamList.append( team )

	#	Calculate max topics and max teams
	maxTopic = 0
	numTeams = 0
	for i in range( n ):
		for j in range( i + 1, n ):
			res = int( bin( teamList[ i ] | teamList[ j ] )[2:] )
			if res > maxTopic:
				numTeams = 1
				maxTopic = res
			elif res == maxTopic:
				numTeams += 1

	print( calcMax( str( maxTopic ) ) )
	print( numTeams )
	
def main():
	n, m = map( int, input().split() )
	getResult( n, m )

if __name__ == "__main__":
	main()
