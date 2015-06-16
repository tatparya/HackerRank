import os
import sys
import re

def convertTime( time ):
	string = "(\d{2}):\d{2}:\d{2}(\w{2})"

	match = re.findall( string, time )
	if match:
		hours = int( match[0][0] )
		p = match[0][1]

		if p == "PM":
			if hours != 12:
				hours += 12
				newTime = str( hours ) + time[2:-2]
			else:
				newTime = time[:-2]
		else:
			if hours == 12:
				newTime = "00" + time[2:-2]
			else:
				newTime = time[:-2]
		print( newTime )

def main():
	time = input()
	convertTime( time )

if __name__ == "__main__":
	main()
