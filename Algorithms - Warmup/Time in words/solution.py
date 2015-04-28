import os
import sys

def getTime( hrs, mins ):
	numList = [	'zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'ninteen', 'twenty', 'twenty one', 'twenty two', 'twenty three', 'twenty four', 'twenty five', 'twenty six', 'twenty seven', 'twenty eight', 'twenty nine' ]
	if mins > 30:
		hour = numList[ hrs + 1 ]
	else:
		hour = numList[ hrs ]

	if mins == 0:
		time = hour + ' o\' clock'

	elif mins == 15:
		time = 'quarter past ' + hour

	elif mins < 30:
		time = numList[ mins ] + ' minutes past ' + hour

	elif mins == 30:
		time = 'half past ' + hour

	elif mins != 45:
		time = numList[ 60 - mins ] + ' minutes to ' + hour

	else:
		time = 'quarter to ' + hour

	print( time );

def main():
	hours = int( input() )
	minutes = int ( input() )
	getTime( hours, minutes )

if __name__ == "__main__":
	main()
