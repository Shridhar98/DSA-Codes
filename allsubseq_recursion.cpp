#include<bits/stdc++.h>
using namespace std;
void print(int i,vector<int> &ds,int arr[],int n){
    if(i==n) {
        if(ds.size()==0) cout<<"{ }"<<endl;
        cout<<"[ ";
        for(auto it: ds){
            cout<<it<<" ";
        }
        cout<<"]";
        cout<<endl;
        return;
    }
     print(i+1,ds,arr,3);
    //take or pick condition
    ds.push_back(arr[i]);
    print(i+1,ds,arr,n);

    //not take or donot pick condition
    ds.pop_back();
   
}

int main(){
    int arr[3] = {3,1,2};
    vector<int> ds;
    print(0,ds,arr,3) ;
    return 0;
}