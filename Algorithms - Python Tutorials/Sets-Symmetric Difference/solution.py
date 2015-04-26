import os
import sys

def main():
	#	Input list 1
	m = input()
	list1 = input()
	set1 = set( list1.split() )

	#	Input list 2
	n = input()
	list2 = input()
	set2 = set( list2.split() )

	uni = set1.union( set2 )
	intersect = set1.intersection( set2 )

	diff = uni.difference( intersect )
	answer = []
	for element in diff:
		answer.append( int( element ) )

	answer.sort()
	for element in answer:
		print( element )

if __name__ == "__main__":
	main()
