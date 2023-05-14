#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,-1,-2};
    int maxsubarrsum = INT_MIN;
    int sum=0;
    for(int i=0;i<6;i++){
        sum = sum + arr[i];
        if(sum>maxsubarrsum){
            maxsubarrsum = sum;
        }
        if(sum<0){
            sum = 0;
        }     
    }
    cout<<maxsubarrsum<<endl;
    return 0;
   
}