class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        
        if(n==0) return {};
        if(n==1) return {0};
        
        vector<int> preSum(n), postSum(n);
        preSum[0] = nums[0];
        postSum[n-1] = nums[n-1];
        
        for(int i=1; i<n; i++){
            preSum[i] = preSum[i-1]+nums[i];
        }
        
        for(int i: preSum) cout<<i<<" ";
        
        cout<<endl;
        
        for(int i=(n-2); i>=0; i--){
            postSum[i] = postSum[i+1]+nums[i];
        }
        
        for(int i: postSum) cout<<i<<" ";
        
        cout<<endl;
        
        for(int i=0; i<n; i++){
            if(i==0) nums[i]=postSum[i+1];
            else if(i==(n-1)) nums[i]=preSum[i-1];
            else nums[i]=abs(postSum[i+1]-preSum[i-1]);
        }
        
        return nums;
    }
};