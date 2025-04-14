#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode( int data){
struct node *n;
n = (struct node *)malloc(sizeof(struct node));
n->data = data;
n->left = NULL; 
n->right = NULL;
return n;
}

void preOrder(struct node * root){
    if(root !=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main(){
    /*
struct node *p;
p = (struct node *)malloc(sizeof(struct node));
p->left = NULL; 
p->right = NULL;

struct node *p1;
p1 = (struct node *)malloc(sizeof(struct node));
p1->left = NULL; 
p1->right = NULL;

struct node *p2;
p2 = (struct node *)malloc(sizeof(struct node));
p2->left = NULL; 
p2->right = NULL;
*/
struct node *p = createnode(4);
struct node *p1= createnode(1);
struct node *p2= createnode(6);
struct node *p3= createnode(5);
struct node *p4= createnode(2);

p->left = p1;
p->right = p2;
p1->left = p3;
p1->right = p4;
preOrder(p);
return 0;
}