#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

bool isSymmetric(Node *root)
{
    // your code goes here
    queue<Node *> q1;
    queue<Node *> q2;
    q1.push(root);
    q2.push(root);

    while (!q1.empty() && !q2.empty())
    {
        Node *top1 = q1.front();
        q1.pop();
        Node *top2 = q2.front();
        q2.pop();
        if (top1->key != top2->key)
            return false;

        if (q1.empty() && !q2.empty())
            return false;
        if (!q1.empty() && q2.empty())
            return false;

        if (top1->left == NULL and top2->right != NULL)
            return false;
        if (top1->left != NULL and top2->right == NULL)
            return false;

        if (top1->right != NULL and top2->left == NULL)
            return false;
        if (top1->right == NULL and top2->left != NULL)
            return false;

        if (top1->left)
            q1.push(top1->left);
        if (top1->right)
            q1.push(top1->right);

        if (top2->right)
            q2.push(top2->right);
        if (top2->left)
            q2.push(top2->left);
    }

    if (q1.empty() && q2.empty())
        return true;

    return false;
}