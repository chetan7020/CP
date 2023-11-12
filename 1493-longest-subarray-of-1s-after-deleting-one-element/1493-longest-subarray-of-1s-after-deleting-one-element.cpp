class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0, maxi= INT_MIN, i=0, j=0, n=nums.size();
        
        while(j<n){
            if(nums[j]==0) zero++;
            
            while(zero>1){
                if(nums[i]==0) zero--;
                i++;
            }
            
            maxi= max(maxi, (j-i));
            j++;
        }
        
        return maxi;
    }
};