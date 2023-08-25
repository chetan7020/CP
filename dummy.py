class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        sm = ""
        
        for i in s :
            
            if(i.isalpha()) :
                
                sm += i.lower()
                
        i = 0
        j = len(sm)-1
        
        print(sm,i,j)
        
        while(i<j) :
            
            if(sm[i]!=sm[j]) :
                
                return False
            
            i+=1
            j-=1
            
        return True
            
            
            
            
s = Solution()

print(s.isPalindrome("0P"))