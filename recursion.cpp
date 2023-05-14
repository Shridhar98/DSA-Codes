/*#include<bits/stdc++.h>
using namespace std;
void f(int i,int sum){
    if(i<1){
        cout<<sum;
        return ;

    }
    f(i-1,sum+i);
}

int main(){
     f(8,0);
    
  
        return 0;
   
}
#include<bits/stdc++.h> 
using namespace std;
void rev(int low,int high,int arr[]){
    if(low>=high) return;
    swap(arr[low],arr[high]);
    rev(low+1,high-1,arr);
}
int main(){
    int arr[5] = {1,2 ,3,4,5};
    rev(0,4,arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
  
        return 0;
   
}

#include<bits/stdc++.h>
using namespace std;
bool pal(int low,int high,string &s){
    if(low==high) return true;
    if(s[low]!=s[high]) return false;
    pal(low+1,high-1,s);
    
}
int main(){
    string s = "sfadaft4s";
    cout<<pal(0,8,s);
    return 0;

}
#include<bits/stdc++.h> 
using namespace std;
void rev(int low,int high,string &s){
    if(low>=high) return;
    swap(s[low],s[high]);
    rev(low+1,high-1,s);
}
int main(){
    string s = "madamt";
    string t = s;
    rev(0,4,s);
    if(t==s) cout<<"1";
    else cout<<"0";
    
  
        return 0;
   
}
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
}*/

#include<bits/stdc++.h>
using namespace std;
void print(int i,vector<int> &ds,int s,int sum,int arr[],int n){
    if(i==n){
        if(s == sum){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    print(i+1,ds,s,sum,arr,n);
    s-=arr[i];
    ds.pop_back();
    print(i+1,ds,s,sum,arr,n);
}
int main(){
    int arr[] = {1,4,2,3,1,1};
    int n=6;
    int sum = 3;
    vector<int> ds;
    print(0,ds,0,sum,arr,n);
    return 0;

}