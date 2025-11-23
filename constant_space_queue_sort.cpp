#include <bits/stdc++.h>
using namespace std;

void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << ",";
        q.pop();
    }
}

queue<int> sortqueue(queue<int> &q)
{
    int n = q.size();
    int lstIdx = n - 1;

    for (int i = 1; i <= n; i++)
    {
        // search minimum value
        int minIdx = 0;
        int minV = INT_MAX;
        int t = n;
        cout << "lstIdx: " << lstIdx << endl;
        while (t--)
        {
            if (lstIdx >= 0)
            {
                if (minV >= q.front())
                {
                    minV = q.front();
                    minIdx = n - t - 1;
                }
            }
            lstIdx--;
            q.push(q.front());
            q.pop();
        }
        cout << "After Search: ";
        printQueue(q);
        cout << endl;
        cout << "minIdx: " << minIdx << ", minV: " << minV << endl;

        // insert min to rear
        int idx = 0;
        int top;
        while (idx != n)
        {

            int front = q.front();
            q.pop();
            if (idx == minIdx)
            {
                cout << "idx: " << idx;
                top = front;
                idx++;
                continue;
            }
            q.push(front);
            idx++;
        }
        q.push(top);
        cout << ", top: " << top << endl;
        lstIdx = n - i - 1;
    }

    return q;
}

int main()
{
    queue<int> q;
    q.push(11);
    q.push(5);
    q.push(4);
    q.push(21);
    sortqueue(q);
    printQueue(q);

    return 0;
}