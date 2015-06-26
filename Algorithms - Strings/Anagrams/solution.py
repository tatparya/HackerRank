import os
import sys
import string

def getResult():
    string = input()
    #   check if str len is odd
    length = len( string )
    if length % 2 != 0:
        print( "-1" )
        return

    #   Get number of replacements
    str1 = string[:int( length / 2)]
    str2 = string[int(length / 2):]

    characters = []

    for element in str2:
        if element not in characters:
            characters.append( element )

    #print( characters )
    changes = 0

    for element in characters:
        count1 = str2.count( element )
        count2 = str1.count( element )
        #print( count1, count2 )

        if count1 > count2:
            changes += count1 - count2

    print( changes )

def main():
    # get input
    n = int( input() )
    for i in range( n ):
        #   Get string and output answer
        getResult()

if __name__ == "__main__":
    main()
