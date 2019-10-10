#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    Node *next;
};

void create(int A[], int n)
{
    int i;
    Node *t, *last;
    first =(Node *)malloc(sizeof(Node));
    first->data=A[0];
    first->next=nullptr;
    last=first;
    
    for(i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->t = t;
        last = t;
    }

}

void display(Node * p)
{
    while(p!=nullptr)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}


int main()
{
    int A[] = {2, 4, 6, 8, 10};
    create(A,5);
    display(first);
    return 0;
}
