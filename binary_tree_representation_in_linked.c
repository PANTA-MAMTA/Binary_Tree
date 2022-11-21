#include<stdio.h>
#include<malloc.h>

struct node{
       int data;
       struct node* left;
       struct node* right;
};

struct node* createNode(int data)
{
       struct node *n;                                         // creating a node pointer
       n=(struct node *) malloc(sizeof(struct node));         //allocating memory in the heap
       n->data=data;                                            //setting the data
       n->left=NULL;                                           //setting the left and right childrean to NULL
       n->right=NULL;                                            //setting the left and right children to NUll
       return n;                                               //finally returing the created node
}

int main()
{      
     
     struct node *p=createNode(2);
     struct node *p1=createNode(1);
     struct node *p2=createNode(4);

     //linking the root node with left and right childrean     
     p->left=p1;
     p->right=p2;
     
      return 0;
}


 /*/  //constructing the root node
       struct node *p;
        p=(struct node *) malloc (sizeof(struct node));
       p->left=NULL;
       p->right=NULL;
       struct node *p;


       //constucting the first node
       struct node *p1;
       p1=(struct node *) malloc (sizeof(struct node));
       p1->left=NULL;
       p1->right=NULL;
       struct node *p;

       //constucting the second node
       struct node *p2;
       p2=(struct node *) malloc (sizeof(struct node));
       p2->left=NULL;
       p2->right=NULL;
       p->left=p1;
       p->right=p2;*/