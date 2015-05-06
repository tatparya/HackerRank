import os
import sys
import string

def main():
    str1 = input()
    str2 = input()

    numDel = len( str1 ) + len( str2 )

    for letter in str1:
    	if letter in str2:
    		cnt1 = str1.count( letter )
    		cnt2 = str2.count( letter )
    		if cnt1 < cnt2:
    			numDel -= cnt1 * 2;

    print( numDel )

if __name__ == "__main__":
    main()
