#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node * left;
    struct node * right;
};
void preorder(struct node s){
    if(s == NULL) return ;
    cout<<s.data;
    preorder(s->left);
    preorder(s->right);

     
}
int main(){
    struct node root;
    preorder(root);

  
    return 0;
   
}