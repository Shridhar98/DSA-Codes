class Solution {
public:
    void print(int ind,int tar,vector<int> &ds,vector<int> & arr,vector<vector<int>> &ans){
        if(tar==0) {
            ans.push_back(ds);
            return;
        }
        for(int i = ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>tar) break;
            ds.push_back(arr[i]);
            print(i+1,tar-arr[i],ds,arr,ans);
            ds.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        print(0,target,ds,candidates,ans);
        return ans;

        
    }
};