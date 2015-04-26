import os

def lonelyInteger():
	a = input()
	array = input()
	inputList = array.split()
	for element in inputList:
		count = inputList.count( element )
		if count < 2:
			print( element )
			return

def main():
	lonelyInteger()

if __name__ == "__main__":
	main()
