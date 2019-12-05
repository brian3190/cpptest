#include <iostream>
#include <string>

struct LinkedList
{
    int data;
    Node *next = nullptr;
};

void addNode(LinkedList& list, int n)
{
	Node *newNode = new Node;
    newNode->data = n;
	newNode->next = nullptr;

    Node *cur = list;
	while(cur->next != nullptr) {
		if(cur->next == nullptr)
		{
			cur->next = newNode;
            return;
        }
        cur = cur->next;
    }
}

void insertFront(LinkedList& list, int n)
{
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *head;
    head = newNode;
}

Node* searchNode(LinkedList& list, int n)
{
    Node* cur = head;
    while(cur->next != nullptr){
        if(cur->data == n) 
            return cout << "Node found with value: " << n <<" at " << cur << '.\n'; 
        cur = cur->next;
    }
    cout << "Node " << n << " not found.\n";
}

int countNode(LinkedList& list)
{
    int count;
    Node* cur = list.head;
    if(head->next == nullptr){
        return 1;
    }
    while(head->next != nullptr){
        cur = cur->next;
        ++count;
    }
    return count;
}

// TODO
void deleteNode(Node* head, int index)
{
    Node* cur = head;
    Node* prev = new Node;
    if(index < 1 || index > countNode(head){
        cout << "index out of bounds\n";
        return;
    }
    for(int i=0; i<index; ++i){
        cur = cur->next;
        
    };
    Node* temp = new Node;
    temp->next = cur->next;
    prev->next = cur->next;
    delete temp;
}

int main(){
    LinkedList list = new LinkedList();
    addNode(list, 3);
    addNode(list, 5);
    addNode(list, 7);
    addNode(list, 9);
    printNode(list, 
