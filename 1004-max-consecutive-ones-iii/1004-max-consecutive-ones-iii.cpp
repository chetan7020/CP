class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cntZ=0, i=0, j=0, n=nums.size(), ans=0;
        
        while(j<n){
            if(nums[j]==0) cntZ++;
            
            while((i<=j) && (cntZ>k)){
                if(nums[i]==0) cntZ--;
                i++;
            }
            
            ans = max(ans, (j-i+1));
            
            j++;
        }
        
        return ans;
    }
};

/*


z=0
i=0

*/