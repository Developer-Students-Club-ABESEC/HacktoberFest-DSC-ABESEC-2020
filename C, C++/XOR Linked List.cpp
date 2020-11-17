#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int val;
	Node *Xor;
	Node(int val)
	{
		this->val = val;
		this->Xor = NULL;
	}
};
pair<Node*, Node*> makeList()
{
	Node *head = NULL, *tail = NULL;
	int n;
	cin >> n;
	while (n--)
	{
		int val;
		cin >> val;
		Node *newNode = new Node(val);
		if (head == NULL)
		{
			head = tail = newNode;
		}
		else
		{
			//in c++ xor of modified pointers which are pointing to objects of certain class are not allowed so
			// for solving this problem we have a keyword uintptr_t
			tail->Xor = (Node*)((uintptr_t)tail->Xor ^ (uintptr_t)newNode);
			newNode->Xor = tail; // here we are storing the address of previous node in current node's xor value
			tail = newNode;
		}
	}
	return {head, tail};
}
void print_lr(Node* head)
{
	Node *curr = head;
	Node *prev = NULL;
	while (curr != NULL)
	{
		cout << curr->val << " ";
		Node *temp = curr;
		curr = (Node*)((uintptr_t)curr->Xor ^ (uintptr_t)prev);
		prev = temp;
	}
	cout << "\n";
}
void print_rl(Node *tail)
{
	Node *curr = tail;
	Node *next = NULL;
	while (curr != NULL)
	{
		cout << curr->val << " ";
		Node *temp = curr;
		curr = (Node*)((uintptr_t)curr->Xor ^ (uintptr_t)next);
		next = temp;
	}
	cout << "\n";
}

int main()
{
	pair<Node*, Node*> p = makeList();
	print_lr(p.first);
	print_rl(p.second);
	return 0;
}

/*
8
1 2 3 4 5 6 7 8

1 2 3 4 5 6 7 8
8 7 6 5 4 3 2 1
*/
