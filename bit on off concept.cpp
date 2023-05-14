class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        int freq[62] = {0};
        
        int n = nums.size();
        long long  totalor = 0;
        
        for(int i = 0 ; i  < n ; i ++){
            int ele = nums[i];
            totalor = (totalor|nums[i]);
            
            for(int j = 0 ; j  <= 30 ; j++){
                if(((ele>>j)&1)==1){
                    freq[j]++;
                }    
            }
        }
        
        long long maxi = totalor;
        
        for(int i = 0 ; i < n ; i ++){
            long long ele = nums[i];
            int x = k;
            while(x--) ele *= 2;
            long long temps = nums[i];
            long long temp = totalor;
            
            for(int j = 0 ; j < 62 ; j++){
                if(((temps>>j)&1) == 1 && freq[j]==1){
                    temp = (temp & (~(1<<j)));
                }
            }
            temp = (temp|ele);
            maxi = max(maxi , temp);
        }
        return maxi;    
    }
};
