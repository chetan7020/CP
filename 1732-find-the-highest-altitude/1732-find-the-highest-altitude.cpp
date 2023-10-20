class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int ans=max(0, gain[0]);
        
        for(int i=1; i<n; i++){
            gain[i]+=gain[i-1];
            ans=max(ans, gain[i]);
        }
        
        return ans;
    }
};