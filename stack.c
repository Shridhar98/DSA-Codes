/*#include<stdio.h>
#include<stdlib.h>
#define max 10 
struct stack{
    int a[max];
    int top;
};
void createemptystack(struct stack * ptr){
    ptr->top == -1;
}
int isfull(struct stack *ptr){
    if(ptr->top == max-1) return 1;
    else return 0;
}

int isempty(struct stack *ptr){
    if(ptr->top==-1) return 1;
    else return 0;
}

void push(struct stack *ptr,int c){
    if(isfull(ptr)) printf("stack is full");
    else {
        ptr->top++;
        ptr->a[ptr->top]=c;
    }
}

void pop(struct stack *ptr){
    if(isempty(ptr)) printf("stack is empty");\
    else {
        printf("%d item to be popped",ptr->a[ptr->top]);
        ptr->top--;
    }
}

void printstack(struct stack *ptr){
    printf("stack is");
    for(int i=0;i<ptr->top;i++){
        printf("%d ",ptr->a[i]);
    }
}

int main(){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    createemptystack(s);
    isfull(s);
    return 0;
    
}*/

#include<stdio.h>
#include<stdlib.h>
#define max 10
struct stack{
    int top;
    int a[max];
};
void push(struct stack *ptr,int val){
    if(ptr->top==max-1){
        printf("stack is empty");
        return ;
    }
    else {
        ptr->top++;
        ptr->a[ptr->top] = val;
    }
}

void traversal(struct stack )


int main(){
  struct stack *s; 
  s = (struct stack *)malloc(sizeof(struct stack));
  s->top = -1;
  push(s,45);
  



}