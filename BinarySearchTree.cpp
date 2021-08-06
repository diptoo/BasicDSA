//Resource - Coding Minutes Udemy

#include <iostream>
using namespace std;

void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// height of a BST is O(H), don't say O(logn)
Node *insertBinarySearchTree(Node *root, int key)
{
    if (root == NULL)
        return new Node(key);

    if (key <= root->data)
    {
        root->left = insertBinarySearchTree(root->left, key);
    }
    else
    {
        root->right = insertBinarySearchTree(root->right, key);
    }
    return root;
}

//complexity O(height of the tree), worst case height n. logn<=O(Height)<=n.
//Complexity depends on the structure of the tree
bool searchBST(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == key)
    {
        return true;
    }
    if (key <= root->data)
    {
        return searchBST(root->left, key);
    }
    else
    {
        return searchBST(root->right, key);
    }
}

void printInorder(Node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << "->";
    printInorder(node->right);
}

int main()
{
    fileIO();

    Node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    for (int val : arr)
    {
        root = insertBinarySearchTree(root, val);
      //  cout << "root data- " << root->data << endl;
    }
    int n;
    cin>>n;
    cout<<searchBST(root, n)<<endl;
    //printInorder(root);
}