#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

vector<int> printKthLevel(Node *root, int k)
{
    vector<int> v;
    queue<Node *> q;
    int level = 0;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        Node *front = q.front();

        if (front == NULL and !q.empty())
        {
            q.push(NULL);
            level++;
            q.pop();
        }
        else
        {
            if (k == level)
            {
                while (!q.empty() && q.front() != NULL)
                {
                    v.push_back(q.front()->key);
                    q.pop();
                }
                return v;
            }
            q.pop();
            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }
    }
}