#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class Solution
{
public:
    Node* insert (Node* head, int data)
    {
        Node* link = new Node (data);
        Node* scan = head;
        if (head == NULL) return link;
        while(scan->next != NULL)
        {
            scan = scan->next;
        }
        scan->next = link;
        return head;
    }
    void display (Node* head)
    {
        Node* scan = head;
        while (scan)
        {
            cout << scan->data << " ";
            scan = scan->next;
        }
    }
};

int main ()
{
    int data, T;
    Node* head = NULL;
    Solution list;
    cin >> T;
    while(T-->0)
    {
        cin >> data;
        head = list.insert(head,data);
    }
    list.display(head);
    return 0;
}
