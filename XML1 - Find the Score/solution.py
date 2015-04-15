import sys
import string
import re

def readLines( numlines ):
    score = 0
    for i in range( numlines ):
        line = input()
        match = re.findall( r"\w*=\'(.*?)\'", line )
        if match:
            score += len( match )

    print( score )
    
def main():
    numlines = input()
    
    readLines( int(numlines) )

if __name__ == "__main__":
    main()