import os

def getResult():
	arr1 = []
	arr2 = []
	n, k = map( int, input().split() )
	arr1 = list( map( int, input().split() ) )
	arr2 = list( map( int, input().split() ) )

	arr1.sort()
	arr2.sort()

	flag = 1
	i = 0
	while i < n:
		if arr1[i] + arr2[n-i-1] < k:
			flag = 0
			break
		i += 1

	if flag:
		print( "YES" )

	else:
		print( "NO" )

def main():
	n = int( input() )
	for i in range( n ):
		getResult()

if __name__ == "__main__":
	main()
