import os
import sys
import re

def main():
	retDay, retMonth, retYear = map( (int), input().split() )
	day, month, year = map( (int), input().split() )

	# 	Calculate fine
	if year < retYear:
		fine = 10000
	elif year > retYear:
		fine = 0
	elif month < retMonth:
		fine = 500 * ( retMonth - month )
	elif month > retMonth:
		fine = 0
	elif day < retDay:
		fine = 15 * ( retDay - day )
	else:
		fine = 0

	print( fine )

if __name__ == "__main__":
	main()
