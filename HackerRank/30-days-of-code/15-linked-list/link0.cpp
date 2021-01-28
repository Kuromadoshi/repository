#include <iostream>
#include <cstddef>

using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node(int d)
		{
			data=d;
			next=NULL;
		}
};

class Solution
{
	public:
		Node* insert(Node *head, int data)
		{
			// steps 1 2 3
			Node* new_node = new Node(data);
			Node* temp = head; // used in step 5
			// step 4
			if (head == NULL)    
			{
				head = new_node;
				return head;
			}
			// step 5
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			// step 6
			temp->next = new_node;
			return head;
		}
		void display (Node *head)
		{
			Node *start = head;
			while (start)
			{
				cout << start->data<<" ";
				start=start->next;
			}
		}
};

int main ()
{
	Node* head = NULL;
	Solution mylist;
	int T, data;
	cin >> T; // T = 4
	while (T-->0)
	{
		cin>>data;
		head=mylist.insert(head, data);
		// head = NULL, data = 2 --> N0
		// head = N0,   data = 3 --> N0
		// head = N0,   data = 4 --> N0
		// head = N0,   data = 1 --> N0
	}
	mylist.display(head);
}