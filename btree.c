#include<stdio.h>
#include<malloc.h>
/*struct node{
    int data;
    struct node *right;
    struct node *left;
};
struct node* createnode(int data){
    struct node *n;//creating a node pointer
    n = (struct node *)malloc(sizeof(struct node));//allocatin memory in heap
    n->data = data;//setting the data
    n->left = NULL;//setting the left and rihgt child to null
    n->right = NULL;
    return n;
}

                 
int main(){
    //constructing the root node;
    struct node *p  = createnode(2);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    p->left = p1;
    p->right = p2;

    // p = (struct node*)malloc(sizeof(struct node));

    // p->left = NULL;
    // p->right = NULL;
    // p->data = 5;
    // struct node *p1 ;
    // p1 = (struct node*)malloc(sizeof(struct node));
    // p1->left = NULL;
    // p1->right = NULL;
    // p1->data = 9;
    // struct node *p2 ;
    // p2 = (struct node*)malloc(sizeof(struct node));
    // p2->left = NULL;
    // p2->right = NULL;
    // p2->data = 4;
    // p->left = p1;
    // p->right = p2;
    return 0;
}*/

struct node{
    int data;
    struct node *right;
    struct node *left;
};
struct node* createnode(int data){
    struct node *n;//creating a node pointer
    n = (struct node *)malloc(sizeof(struct node));//allocatin memory in heap
    n->data = data;//setting the data
    n->left = NULL;//setting the left and rihgt child to null
    n->right = NULL;
    return n;
}
void preorder(struct node *p){
    if(p == NULL ) return ;
    printf("%d ",p->data);
    preorder(p->left);
    preorder(p->right);
}
void inorder(struct node *p){
    if(p==NULL) return;
    inorder(p->left);
    printf("%d ",p->data);
    inorder(p->right);
}

void postorder(struct node *p){
    if(p == NULL) return ;
    postorder(p->left);
    postorder(p->right);
    printf("%d ",p->data);
}
int main(){
    struct node *p  = createnode(2);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(5);
    struct node *p4 = createnode(9);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    //preorder(p);
    //inorder(p);
    postorder(p);

    return 0;
    
}