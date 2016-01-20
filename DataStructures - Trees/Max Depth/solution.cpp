
/*The tree node has data, left child and right child
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int getMax( node * root, int height ){
    //	Traverse
    if( root == NULL ){
        return height;
    }
    int heightLeft = getMax( root -> left, height + 1);
    int heightRight = getMax( root -> right, height + 1);

    if( heightLeft > heightRight )
        return heightLeft;
    else
        return heightRight;
}

int height(node * root)
{
    int height = getMax( root, 0 );
    return height;
}
