#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int d) : data(d), left(NULL), right(NULL) {}
};

Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }

    if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void printInorder(Node *root)
{
    if (root == NULL)
        return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

bool searchBST(Node *root, int data)
{
    if (root == NULL)
        return false;
    if (root->data == data)
        return true;

    if (data <= root->data)
    {
        return searchBST(root->left, data);
    }
    else
    {
        return searchBST(root->right, data);
    }

    // bool left = searchBST(root->left, data);
    // if (left)
    //     return true;
    // bool right = searchBST(root->right, data);
    // if (right)
    //     return true;
    // return false;
}

int findMin(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

bool helper(Node *root, int min, int max)
{
    if (root == NULL)
        return true;

    if (root->data < min || root->data > max)
        return false;

    return helper(root->left, min, root->data) &&
           helper(root->right, root->data, max);
}

bool isBST(Node *root)
{
    return helper(root, INT_MIN, INT_MAX);
}

Node *remove(Node *root, int data)
{
    // traversing first to find the node
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data < data)
    {
        root->right = remove(root->right, data);
    }
    else if (root->data > data)
    {
        root->left = remove(root->left, data);
    }
    // removing the node
    else
    {
        // 0 children
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // 1 child
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        // two children
        else
        {
            int data = findMin(root->right);
            root->data = data;
            root->right = remove(root->right, data);
        }
    }
    return root;
}

int main()
{
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    Node *root = NULL;
    for (int x : arr)
    {
        root = insert(root, x);
    }
    printInorder(root);
    cout << endl;
    // cout << searchBST(root, 1);
    root = remove(root, 13);
    printInorder(root);
    return 0;
}
