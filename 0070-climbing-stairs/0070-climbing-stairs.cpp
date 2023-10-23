class Solution {
public:
    
    int cntNoStairs(vector<int> &dp, int n){
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        
        return dp[n] = cntNoStairs(dp, n-1)+cntNoStairs(dp, n-2);
    }
    
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return cntNoStairs(dp, n);
    }
};