#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
 

node* bubble_sort_LinkedList_itr(node* head)
{
    // your code goes here
    node * end=NULL;
    node * temp;
   
    while (head->next!=end)
    {
        node *cur = head;
        node *prev = NULL;


        while(cur->next!=end)
        {
            if(cur->data>cur->next->data)
            {
                temp = cur->next;
                cur->next=temp->next;
                temp->next=cur;
                if(prev==NULL)
                {
                    head=temp;
                }
                else
                {
                    prev->next=temp;
                }
                prev=temp;
            }
            else
            {
               
                prev=cur;
                cur=cur->next;
            }
        }
            end = cur;
            
    }
    return head;
}

void printList(node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    node* head = new node(4);
    head->next = new node(2);
    head->next->next = new node(5);
    head->next->next->next = new node(1);
    head->next->next->next->next = new node(3);

    cout << "Before sorting:\n";
    printList(head);

    head = bubble_sort_LinkedList_itr(head);

    cout << "After sorting:\n";
    printList(head);

    return 0;
}
