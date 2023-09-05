/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define ll long long

class Solution
{
  public:
  
    bool check(int arr[],int n, int k, int mid){
        int cnt=1; int sum=0;
        
        for(int i=0; i<n; i++){
    
        	if(arr[i]>mid) return false;
    
            if((sum+arr[i])>mid){
                cnt++;
                sum=arr[i];
            }else sum+=arr[i];
        }
    
        return cnt<=k;
    }
  
  
    ll minTime(int arr[], int n, int k)
    {
    	ll lo=INT_MIN, hi=0, ans=-1;
    	
    	for(int i=0; i<n; i++){
    
        	lo = max(lo, (ll)arr[i]);
        	hi+= (ll)arr[i];
        }
    	
    	
    	while(lo<=hi){
    		int mid=lo+(hi-lo)/2;
    	
    		if(check(arr, n, k, mid)){
    			ans=mid;
    			hi=mid-1;
    		}else lo=mid+1;
    	}
    
    	return ans;
    }
};