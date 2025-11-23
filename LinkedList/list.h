#include <iostream>
using namespace std;
class LinkedList;
class Node
{

    int data;

public:
    Node *next;
    Node(int d) : data(d), next(nullptr){};
    ~Node()
    {
        cout << "deleting NODE" << data << endl;
        if (next != nullptr)
            delete next;
    }

    int getData()
    {
        return data;
    }

    friend LinkedList;
};

class LinkedList
{
    Node *head;
    Node *tail;

    bool search(int key, Node *n)
    {
        if (n->data == key)
            return true;

        if (n->next == nullptr)
            return false;

        return search(key, n->next);
    }

public:
    LinkedList() : head(nullptr), tail(nullptr){};
    ~LinkedList()
    {
        cout << "deleting Head" << head->data << endl;

        if (head != nullptr)
            delete head;
    }

    void push_front(int d)
    {
        if (head == nullptr)
        {
            Node *n = new Node(d);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(d);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }

        int idx = 1;
        Node *temp = head;
        while (idx != pos)
        {
            temp = temp->next;
            idx++;
        }
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }

    void pop_front()
    {
        Node *temp = head;

        head = head->next;

        temp->next = nullptr;
        delete temp;
    }

    void remove(int pos)
    {
        if (pos == 0)
        {
            pop_front();
            return;
        }
        int idx = 0;
        Node *temp = head;
        Node *n;
        while (idx != pos)
        {
            n = temp;
            temp = temp->next;
            if (temp->next != nullptr)
                break;

            idx++;
        }
        n->next = temp->next;
        temp->next = nullptr;
        delete temp;
    }

    void pop_back()
    {
        if (head == nullptr)
            return;

        if (head == tail)
            return;

        Node *n = head;
        while (n->next != tail)
        {
            n = n->next;
        }

        n->next = tail->next;
        delete tail;
        tail = n;
    }

    bool searchRecursive(int key)
    {
        if (head == nullptr)
            return false;

        return search(key, head);
    }

    void reverseList()
    {
        Node *prev = nullptr;
        Node *current = head;
        if (head->next == nullptr || head == nullptr)
            return;

        Node *temp;
        while (current != nullptr)
        {
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
            // cout
            //     << prev->data << "->";
        }
        head = prev;
    }

    Node *begin()
    {
        return head;
    }
};