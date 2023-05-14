#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;

    }
}

struct node * insertfirst(struct node * head,int val){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    
    ptr->next = head;
    ptr->data = val;
    return ptr;
}

struct node * insertatindex(struct node *ptr,int index,int val){
    for(int i=0;i<index-1;i++){
        ptr = ptr->next;
    }
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    p->next = ptr->next;
    ptr->next = p;
}

void insertatend(struct node *ptr,int val){
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->next  = NULL;
    p->data = val;
    ptr->next = p;
    
}
void deletion(struct node *ptr, int index){
    for(int i =0;i<index-1;i++){
        ptr = ptr->next;
    }
    ptr->next = ptr->next->next;


}

int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    head->data = 15;
    head->next= second;

    second->data= 45;
    second->next = third;

    third->data = 67;
    third->next  = NULL;
    traversal(head);
    //head = insertfirst(head,3);
    printf("\n");
    //traversal(head);
    insertatindex(head,2,68);
    traversal(head);
    printf("\n");
    deletion(head,2);
    traversal(head);
    //traversal(head);
    //insertatend(head,89);
    //traversal(head);

    return 0;

}
