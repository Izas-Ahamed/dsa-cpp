#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int d) : data(d), left(NULL), right(NULL) {}
};

node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }

    node *n = new node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPreOrder(node *n)
{
    if (n == NULL)
        return;

    cout << n->data << " ";
    printPreOrder(n->left);
    printPreOrder(n->right);
}

int height(node *n)
{
    if (n == NULL)
        return 0;
    int left = height(n->left);
    int right = height(n->right);

    return max(left, right) + 1;
}

// O(N^2)
int diameter(node *n)
{
    if (n == NULL)
        return 0;

    int d1 = height(n->left) + height(n->right);
    int d2 = diameter(n->left);
    int d3 = diameter(n->right);

    return max(d1, max(d2, d3));
}

// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

int main()
{
    node *root = buildTree();
    printPreOrder(root);
    // printLevelOrder(root, q);
    cout << diameter(root);
    return 0;
}
