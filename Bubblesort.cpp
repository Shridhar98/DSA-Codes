/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);
    }
    //bubble sort algorithms
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1] = temp;
            }
            //By default bubble sort is not adaptive 
            //for adaptive bubble sorting we just check number of swappings in the first pass
            else{
                count++;
                if(count==n-1) return;
            }
        }
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"hello world shridhar reddy";
    return 0;
}