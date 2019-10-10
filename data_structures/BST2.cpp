#include <iostream>

void createPre(int pre[], int n)
{
  stack s;
  Node *d;
  int i = 0;

  root = new Node;
  root->data = pre[i++];
  root->lchild = root->rchild = NULL;
  p = root;
  while(i<n)
  {
    if(pre[i] < p->data)
    {
      t = new Node;
      t->data = pre[i++];
      t->lchild = t->rchild = NULL;
      p->lchild = t;
      push(s, p);
      p = t;
    } else {
      if (pre[i] > p->data && pre[i] < stackTop(s)->data)
      {
        t = new Node;
        t->data = pre[i++];
        t->lchild = t->rchild = NULL;
        p->rchild = t;
        p = t;
      }
    }
  }
}

//TODO: push

//TODO: stackTop

int main(){
  int arr[7] = {30, 20, 10, 55, 70, 55, 40, 25};
  createPre(arr,sizeof(arr));
}
