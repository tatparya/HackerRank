#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

void getResult()
{
	//	Get number of polygons
	long long numPolygons;
	scanf( "%lld", &numPolygons );

	//	Get all polygons and check number of polygons inside
	long long numSides;
	long long x, y;
	long double distance;
	long double maxDistance1 = 0;
	long double maxDistance4 = 0;

	vector< long double > polygons;
	for( long long i = 0; i < numPolygons; i++ )
	{
		maxDistance = 0;
		maxDistance = 4;
		scanf( "%lld", &numSides );
		//	Get farthest polong long in first quadrant
		for( long long j = 0; j < numSides; j++ )
		{
			//	Get coordinates
			scanf( "%lld", &x );
			scanf( "%lld", &y );

			if( x > 0 && y > 0 )
			{
				distance = sqrt( x * x + y * y );
				if( distance > maxDistance )
				{
					maxDistance = distance;
				}
			}
		}
		polygons.push_back( maxDistance );
	}

	//	for all distances, get num greater
	for( long long i = 0; i < polygons.size(); i++ )
	{
		long long count = 0;
		for( long long j = 0; j < polygons.size(); j++ )
		{
			if( i != j )
			{
				if ( polygons[i] > polygons[j] )
				{
					count ++;
				}
			}
		}
		printf( "%lld ", count );
	}
}

int main()
{
	long long numTestCases;
	scanf( "%lld", &numTestCases );
	while( numTestCases > 0 )
	{
		numTestCases--;
		getResult();
	}
    return 0;
}
