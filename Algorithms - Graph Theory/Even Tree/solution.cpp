#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

#define MAX 100

class Node
{
	public:
		int id;
		int parent;
		int numChildren;
		vector<int> children;
		int numVertices;

		Node();
		void init( int, int );
		void addChild( int );
		void printChildren();
};

//	Constructor
Node::Node()
{
	parent = 0;
	numVertices = 1;
	numChildren = 0;
}

void Node::init( int nodeId, int parentId )
{
	id = nodeId;
	parent = parentId;
	// cout << "Node Id : " << id + 1 << endl;
	// cout << "Parent : " << parent + 1 << endl;
}

void Node::addChild( int child )
{
	children.push_back( child );
	this -> numChildren++;
	// cout << "Adding child : " << child + 1 << " to : " << this -> id + 1 << endl;
}

void Node::printChildren()
{
	cout << "Node : " << this -> id + 1 << endl;
	cout << "Num children : " << this -> numChildren << endl;
	cout << "Num vertices : " << this -> numVertices << endl;
	for( int i = 0; i < this -> children.size(); i++ )
	{
		cout << i + 1 << " : " << this -> children[i] + 1 << endl;
	}
}

int getNumVertices( int n, Node nodes[ MAX ], int currentNode, int &numCuts )
{
	
	
	if( nodes[currentNode].numChildren == 0 )
	{
		return 1;
	}

	for( int i = 0; i < nodes[currentNode].numChildren; i++ )
	{
		// cout << "numChildren : " << nodes[currentNode].numChildren << endl;
		// cout << "Parent : " << currentNode + 1 << endl;
		// cout << "Child : " << i + 1 << endl;
		nodes[currentNode].numVertices += getNumVertices( n, nodes, nodes[currentNode].children[i], numCuts );
	}

	if( nodes[currentNode].numVertices % 2 == 0 )
	{
		numCuts++;
	}

	// cout << "numVertices : " << nodes[currentNode].numVertices << endl;

	return nodes[currentNode].numVertices;
}

int main() 
{
	int n;	//	Num nodes
	int m;	//	Num edges

	int parent;
	int child;

	int numCuts = -1;

	Node nodes[ 100 ];

	//	Get inputs
	cin >> n;
	cin >> m;

	//	Get edges
	for( int i = 1; i < n; i++ )
	{
		cin >> child;
		cin >> parent;

		//	Init child
		nodes[child - 1].init( i, parent - 1 );
		//	Add child to parent
		nodes[parent - 1].addChild( child - 1 );
	}

	// cout <<"\n~~ GETTING VERTICES ~~ \n\n";

	//	Calculate num vertices
	getNumVertices( n, nodes, 0, numCuts );

	// cout << "\n~~~ALL VERTICES~~~\n\n";

	// //	Print all children
	// for( int i = 0; i < n; i++ )
	// {
	// 	nodes[i].printChildren();
	// }

	cout << numCuts << endl;

    return 0;
}