/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
class Solution {
public:

    int check(vector<int> &arr, int n, int k, int mid){
        int placedCows =1, lastPlaced=0;
        
        int i=1;
        while(i<n){
            
            if(arr[i]-arr[lastPlaced]>=mid){
                placedCows++;
                lastPlaced=i;
            }
            
            i++;
        }
        
        return placedCows>=k;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        sort(stalls.begin(), stalls.end());
        
        int lo=0;
        int hi=stalls[n-1]-stalls[0];
        int ans=-1;
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            
            if(check(stalls, n, k, mid)){
                ans=mid;
                lo=mid+1;
            }else hi=mid-1;
        }
        
        return ans;
    }
};