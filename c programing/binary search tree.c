#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* leftChild;
  struct Node* rightChild;
};

struct Node* createNode(int data)
{
  struct Node* newNode;
  newNode =(struct Node*)malloc(sizeof(struct Node));
  newNode->data=data;
  newNode->leftChild=NULL;
  newNode->rightChild=NULL;
  return newNode;
}

struct Node* insertatnode(struct Node* root,int data)
{
  struct Node* newdata=createNode(data);
  if (root==NULL)
  {
    root=newdata;
  }
  else
  {
    if (newdata->data<root->data)
    {
      root->leftChild=insertatnode(root->leftChild,data);
    }
    else
    {
      root->rightChild=insertatnode(root->rightChild,data);
    }
  }
  return root;
}
void in_order(struct Node* root)
{
    if(root!=NULL){
        in_order(root->leftChild);
        printf("%d->",root->data);
        in_order(root->rightChild);
    }
}
void pre_order(struct Node* root)
{
    if(root!=NULL){
        printf("%d->",root->data);
        pre_order(root->leftChild);
        pre_order(root->rightChild);
    }
}
void post_order(struct Node* root)
{
    if(root!=NULL){
        post_order(root->leftChild);
        post_order(root->rightChild);
        printf("%d->",root->data);
    }
}

int main()
{
  struct Node* root=NULL;
  int n,data;

  for(int i=0;i<=7;i++)
  {
      printf("Enter the data for node %d:\n ",i+1);
      scanf("%d",&data);
      root=insertatnode(root,data);
  }
  printf("In_order:\n ");
  in_order(root);
  printf("\n");
  printf("pre_order: ");
  pre_order(root);
  printf("\n");
  printf("post_order: ");
  post_order(root);
  printf("\n");
}
