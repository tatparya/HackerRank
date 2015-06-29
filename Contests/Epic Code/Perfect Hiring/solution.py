import os

def main():
	#	Get info
	n, p, x = map( (int), input().split() )
	arr = input().split()

	#	Get max rating id
	maxId = 1
	maxRating = 0

	for i in range( n ):
		rating = p * int(arr[i])
		if rating > maxRating:
			maxRating = rating
			maxId = i + 1
		p -= x

	print( maxId )

if __name__ == "__main__":
	main()
