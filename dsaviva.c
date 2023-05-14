#include<stdio.h>
#include<stdlib.h>
struct queue{
	int priority[50];
	int arr[50];
	
};
int front=-1,rear=-1;

void insert(struct queue *ptr,int data,int prior){
	if(front==-1){
	      front=0;
	
	}
	else{
                
        	ptr->arr[rear++] = data;
		ptr->priority[rear++] = prior;
	}
}
void checkprior(struct queue *ptr){
	for(int i=front;i<rear;i++){
		for(int j=i;j<rear;j++){
			if(ptr->priority[j]<ptr->priority[j+1]){
				int temp = ptr->priority[j];
				ptr->priority[j] = ptr->priority[j+1];
				ptr->priority[j+1] = temp;
				int t = ptr->arr[j];
				ptr->arr[j] = ptr->arr[j+1];
				ptr->arr[j+1] = t;
			}
		}
	}
}

void display(struct queue *ptr){
	for(int i=0;i<rear+1;i++){
		printf("%d ",ptr->arr[i]);
	}
	
}

void delete(struct queue *ptr){
	if(rear = 0){
		printf("queue is empty");
	}
	else {
		front =front+1;
	}
}

int main(){
	struct queue *p = (struct queue *)malloc(sizeof(struct queue));
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int t,po;
		scanf("%d %d",&t,&po);
		insert(p,t,po);
	}
	checkprior(p);
        printf("The displayed queue:");
	display(p);
	delete(p);
        return 0;
}