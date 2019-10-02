#include <iostream>
#include <string>

struct Node
{
  int data;
  Node* next;
};

void initNode(Node *head, int n){
	head->data = n;
	head->next = NULL;
}

void addNode(Node *head, int n)
{
	head->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur)
	{
		if(cur->next == NULL)
		{
			cur->next = newNode;
            return;
        }
        cur = cur->next;
    }
}

void insertFront(Node *head, int n)
{
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *head;
    *head = newNode;
}

Node *searchNode(Node *head, int n)
{
    Node *cur = head;
    while(cur){
        if(cur->data == n) return cur;
        cur = cur->next;
    }
    cout << "Node " << n << " not found.\n";
}

bool deleteNode(Node *head, Node *ptrDel)
{
    Node *cur = *head;
    if(ptrDel == *head)
    {
        *head = cur->next;
        delete ptrDel;
        return true;
    }

    while(cur)
    {
        if(cur->next == ptrDel)
        {
            cur->next = ptrDel->next;
            delete ptrDel;
