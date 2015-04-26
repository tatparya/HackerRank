import os
import sys
import string

def main():
    line = input()
    string = line.lower()
    for i in range( 26 ):
        char = chr( i + 97 )
        if string.count( char ) == 0:
            print( "not pangram" )
            return

    print( "pangram" )
    
if __name__ == "__main__":
    main()
