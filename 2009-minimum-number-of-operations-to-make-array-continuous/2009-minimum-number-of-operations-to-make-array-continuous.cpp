class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n= nums.size();
        
        set<int> st;
        
        for(int i: nums) st.insert(i);
        
        nums.clear();
        
        for(int i: st) nums.push_back(i);
        
        sort(nums.begin(), nums.end());
        
        int currN = nums.size();
            
        int i=0, j=0, noChanges=INT_MIN;
        
        while(j<currN){
            while(j<currN && nums[j]<nums[i]+n) j++;
            noChanges = max(noChanges, (j-i));
            i++;
        }
        
        return (n-noChanges);
    }
};