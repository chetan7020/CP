class Solution {
public:
    
    static bool cmp(int a, int b){
        int aB = __builtin_popcount(a);
        int bB = __builtin_popcount(b);
        
        if(aB==bB) return a<b;
        return aB<bB;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
        
    }
};