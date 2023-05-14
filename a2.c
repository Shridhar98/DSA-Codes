/*#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int light[5];
    int time[5];
    int traff[5];
};

struct queue q;

void generateblock()
{ // 0 1
    for (int i = 0; i < 5; i++)
    {
        q.traff[i] = rand() % 100 + 1;
        printf("Traffic at road %d is %d\n", i + 1, q.traff[i]);
    }
    printf("\n");
}

void generatelight()
{ // 0 1
    // for (int i = 0; i < 5; i++)
    //{
    //  if(q.light[i]==1){
    // q.time[i] = rand() % 11 + 10;
    // }else{
    //  q.time[i]=0;
    // }
    //  printf("Traffic light time at road %d is %d\n",i+1,q.time[i]);
    //}


    
        
        printf("Assuming for 1 second 1 car passes\n");
        for (int i = 0; i < 5; i++)
        {

            q.light[i] = 0;
            for (int j = i + 1; j < 5; j++)
            {
                q.light[i] = 1;
                q.light[j] = 1;
                q.time[i] = rand() % 11 + 10;
                q.time[j] = rand() % 11 + 10;
                printf("Time for Road %d is %dsec\n", i + 1, q.time[i]);
                printf("Time for Road %d is %dsec\n", j + 1, q.time[j]);

                // if(q.traff[i]-q.time[i]<0 || q.traff[j]-q.time[j]<0){
                if (q.traff[i] - q.time[i] < 0 && q.traff[j] - q.time[j] > 0)
                {
                    q.traff[i] = 0;
                }
                else if (q.traff[i] - q.time[i] < 0 && q.traff[j] - q.time[j] < 0)
                {
                    q.traff[j] = 0;
                    q.traff[i] = 0;
                }
                else if (q.traff[i] - q.time[i] > 0 && q.traff[j] - q.time[j] < 0)
                {
                    q.traff[j] = 0;
                }
                else
                {
                    q.traff[i] = q.traff[i] - q.time[i];
                    q.traff[j] = q.traff[j] - q.time[j];
                }
                printf("Traffic for Road %d is %d\n", i + 1, q.traff[i]);
                printf("Traffic for Road %d is %d\n", j + 1, q.traff[j]);
                printf("\n");
                

                // if(q.traff[i])

                // if(q.traff[i] >= 80){
                //  q.light[i]=0;
                // }else{
                //  q.light[i]=1;
                // }
            }
            printf("\n");
            // q.light[j]=0;
            // printf("Traffic light at road %d is %d\n",i+1,q.light[i]);
        }
        
        for (int i = 0; i < 5; i++)
        {
        
            printf("traffic at road %d is:%d \n", i + 1, q.traff[i]);
        }
    
}

// void gentime(){
//  for(int i=0;i<5;i++){
//  if(q.light[i]==1){
//  q.time[i] = rand() % 11+10;
// }else{
//  q.time[i]=0;
// }
//  printf("Traffic light time at road %d is %d\n",i+1,q.time[i]);
//  }
// }

void printsig()
{
    int min = 0;
    int ind;
    int i = 0;
    for (i; i < 5; i++)
    {
        if (min < q.time[i])
        {
            min = q.time[i];
            ind = i;
            // printf("Signal %d",i);
        }
    }
    printf("Road %d has maximum traffic time.", ind + 1);
}

int main()
{
    // struct queue *r=(struct queue*)malloc(sizeof(struct queue*));
    // struct queue *r;
    // struct queue* q[5]= (struct queue*)malloc(sizeof(struct queue));
    generateblock();
    generatelight();
    // gentime();
    // printsig();

    return 0;
}*/


#include<stdio.h>
int max_profit(int rod[],int cpc,int mp,int l,int size){
    int profit = 0;
    for(int i=0;i<size;i++){
        if(rod[i]%l==0){
            profit = (mp*rod[i]-(rod[i]/l-1)*cpc);
        }
        else{
            profit+=(mp*(rod[i]-rod[i]%l)-(rod[i]/l)*cpc);
        }
        
    }
    return profit;
}

int main(){
    int cpc,mp,n;
    scanf("%d",&cpc);

    scanf("%d",&mp);

    scanf("%d",&n);

    int rod[n];
    for(int i=0;i<n;i++){
        scanf("%d",&rod[i]);
    }
    int maxprofit = 0;
    for(int j=1;j<=10000;j++){
        int prof = max_profit(rod,cpc,mp,j,n);
        if(prof>maxprofit) {
            maxprofit = prof;
        }

    }
    printf("%d",maxprofit);
    return 0;

}



