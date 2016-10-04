import os

def main():
    n = int(input())
    nums = list( map( int, input().split() ) )
    weights = list( map( int, input().split() ) )

    sum = 0
    weightSum = 0
    i = 0
    for element in nums:
        sum += element * weights[i]
        weightSum += weights[i]
        i += 1

    print( "{:.1f}".format( sum / weightSum ) )

if __name__ == "__main__":
    main()
