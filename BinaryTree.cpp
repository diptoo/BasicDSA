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

Node *buildTree()
{
    int node;
    cin >> node;
    if (node == -1)
        return NULL;
    Node *n = new Node(node);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPreorder(Node* node)
{
    if(node == NULL) return;
    cout<<node->data<<"->";
    printPreorder(node->left);
    printPreorder(node->right);
}

void height()
{

}

void diameter()
{
    
}

int main()
{
    fileIO();
    Node* head = buildTree();
    printPreorder(head);
}