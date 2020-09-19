#include<stdio.h>
#include <stdlib.h>
struct node* create();
struct node{
    int data;
    struct node *right;
    struct node *left;
};
void main(){
    struct node *root;
    root=create();
}
struct node* create(){
    int x;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nENTER DATA or -1 to cancel");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("\nENTER LEFT CHILD");
    newnode->left=create();
    printf("\nENTER RIGHT CHILD");
    newnode->right=create();
    return newnode;
}
