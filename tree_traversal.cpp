#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    Node *left;
    Node *right;
    int data;
    Node(int d) : data(d), left(NULL), right(NULL) {}
};

Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }

    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPreOrder(Node *n)
{
    if (n == NULL)
        return;

    cout << n->data << " ";
    printPreOrder(n->left);
    printPreOrder(n->right);
}

void printLevelOrder(Node *root, queue<Node *> &q)
{
    if (q.empty() && root != NULL)
    {
        q.push(root);
        q.push(NULL);
    }

    if (q.empty())
    {
        return;
    }

    Node *top = q.front();
    q.pop();
    if (top == NULL && !q.empty())
    {
        q.push(NULL);
        cout << endl;
    }
    else if (!q.empty())
    {

        cout << top->data << " ";
        if (top->left != NULL)
            q.push(top->left);
        if (top->right != NULL)
            q.push(top->right);
    }

    printLevelOrder(q.front(), q);
}

Node *buildLevelOrderTree(int arr[], int n)
{
    queue<Node *> q;
    Node *root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    while (!q.empty() && i < n)
    {
        Node *top = q.front();
        q.pop();

        if (arr[i] != -1)
        {
            top->left = new Node(arr[i]);
            q.push(top->left);
        }
        i++;

        if (i < n && arr[i] != -1)
        {
            top->right = new Node(arr[i]);
            q.push(top->right);
        }
        i++;
    }

    return root;
}

int height(Node *n)
{
    if (n == NULL)
        return 0;
    int left = height(n->left);
    int right = height(n->right);

    return max(left, right) + 1;
}

// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

int main()
{
    // Node *root = buildTree();
    // queue<Node *> q;
    // printPreOrder(root);
    // printLevelOrder(root, q);

    int arr[] = {1, 2, 3, 4, 5, -1, 6, -1, -1, 7, -1, -1, -1, -1, -1};
    Node *lvlOrderTree = buildLevelOrderTree(arr, sizeof(arr) / sizeof(arr[0]));
    printPreOrder(lvlOrderTree);
    cout << endl
         << height(lvlOrderTree);

    return 0;
}
