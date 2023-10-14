
class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0, j=0, n=s.size();
        
        map<char, int> mp;
        int cnt=0, ans=0;
        
        while(j<n){
            mp[s[j]]++;
            if(mp[s[j]]==1) cnt++;
            if(j-i+1==3){
                if(cnt==3) ans++;
                mp[s[i]]--;
                if(mp[s[i]]==0) cnt--;
                i++;
            }
            j++;
        }
        
        return ans;
    }
};