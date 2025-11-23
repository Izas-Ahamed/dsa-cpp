#include "list.h"
#include <iostream>
using namespace std;

int main()
{
    LinkedList l;
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(1);

    // l.insert(10, 0);
    Node *n1 = l.begin();
    while (n1 != nullptr)
    {
        cout << n1->getData() << "->";
        n1 = n1->next;
    }
    cout << endl;
    l.reverseList();

    Node *n = l.begin();
    while (n != nullptr)
    {
        cout << n->getData() << "->";
        n = n->next;
    }
    cout << endl;
    // l.remove(4);
    // l.pop_back();

    // Node *n = l.begin();
    // while (n != nullptr)
    // {
    //     cout << n->getData() << "->";
    //     n = n->next;
    // }
    // cout << endl;
    // cout << l.searchRecursive(10);
    // l.pop_front();
}