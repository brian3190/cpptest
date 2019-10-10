#include <iostream>

struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
};

Node *root = NULL;

// Iterative
struct Node *search(int k)
{
    Node *n = root;

    while(n != NULL)
    {
      if(k == n->data)
	  return n;
      else if(k < n->data)
	  n = n->lchild;
      else
	  n = n->rchild;
    }
    return NULL; 
}


/* Recursive
Node *search(int k)
{
    Node *n = root;
    while(n != NULL)
    {
	if(k == n->data)
	    return n;
	else if(k < n->data)
	    n = n->lchild;
	else
	    n = n->rchild;
    }
    return NULL;	
}
*/

void insert(int k)
{
    Node *n = root; 
    Node *tail = NULL;
    Node *temp;
     
    if(root == NULL)
    {
	temp = new Node;
	temp->data = k;
	temp->lchild = temp->rchild = NULL;
	root = temp;
	return;
    }
    while(n != NULL)
    {
      tail = n;
      if(k < n->data)
    	n = n->lchild;
      else if(k > n->data)
	n = n->rchild;
      else
 	return;
    }
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = k;
    temp->lchild = temp->rchild = NULL;
    if(k < tail->data)
	tail->lchild = temp;
    else
	tail->rchild = temp;
}

/* Recursive insert
Node *insert(Node *P, int k)
{
    Node *temp;
    if(P == NULL)
    {
	temp = new Node;
	temp->data = k;
	temp->lchild = t->rchild = NULL;
	return temp;
    }
    if(k < P->data)
	P->lchild = insert(P->lchild, k);
    else if(k > P->data)
	P->rchild = insert(P->rchild, k);
    return P;
}
*/

void traverse_inorder(Node *ptr)
{
    if(ptr)
    {
	traverse_inorder(ptr->lchild);
	printf("%d ",ptr->data);
	traverse_inorder(ptr->rchild);
    }
}

int main()
{
    Node *temp;
    insert(5);
    insert(80);
    insert(3);
    insert(40);
    insert(12);

    std::cout << "Traversing the list: " << std::endl;
    traverse_inorder(root);
    printf("\n");

    std::string el;
    std::cin >> el;
    int myint = stoi(el);
    temp = search(myint);
    if(temp!=NULL)
	printf("element %d is found\n", temp->data);
    else
	printf("element is not found\n");

    return 0;
}		
