import os
import sys
import string

def main():
    #   get input
    n = int( input() )

    rockList = []

    for i in range( n ):
        rock = input()
        rockList.append( rock );

    gemList = []

    for element in rockList[0]:
        if element not in gemList:
            gemList.append( element )

    #   Check occurance of each letter in other strings
    itr = 0
    while itr < len(gemList):
        i = 1
        found = 1
        while i < n and found:
            if gemList[itr] not in rockList[i]:
                found = 0
                gemList[itr] = 0
            i += 1
        itr += 1

    #   remove all 0's
    while 0 in gemList:
        gemList.remove( 0 )

    print( len( gemList ) )

if __name__ == "__main__":
    main()
