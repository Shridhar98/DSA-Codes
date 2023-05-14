#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void enqueue(int );
void dequeue();
void display();

int rear=-1,front=-1,a[SIZE];

int main(){


    
}
void enqueue(int x){
    if(rear = SIZE-1 ) printf("queue is full");
    else{
        if(front==-1 ) front=0;
        else {
            rear++;
            a[rear] = x;
            printf("item to be inserted is %d",x);
        }
    }
    
}
void dequeue(){
    printf("the deleted element is %d",a[front]);
    front++;
    if(front>rear) {
        rear = -1;
        front=rear;

    }

}
void printqueue(){
    printf("the queue is:");
    for(int i=front;i<rear;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}


