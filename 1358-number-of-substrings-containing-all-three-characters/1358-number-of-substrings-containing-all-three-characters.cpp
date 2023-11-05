class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0, j=0, k=3, cnt=0, n=s.size(), ans=0;
        
        map<char, int> mp;
        
        while(j<n){
            mp[s[j]]++;
            if(mp[s[j]]==1) cnt++;
            
            while(i<=j && cnt==k){
                ans+=(n-j);
                mp[s[i]]--;
                if(mp[s[i]]==0) cnt--;
                i++;
            }
            
            j++;
        }
        
        return ans;
    }
};