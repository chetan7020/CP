class Solution {

// area = width * height
// height is given we have to find width
// width is differece between j-i

    public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxArea=0, i=0, j=n-1;
        
        while(i<j){
            int h= min(height[i], height[j]);
            int w=(j-i);
            maxArea = max(maxArea, (h* w));
            
            if(height[i]<height[j]) i++;
            else if(height[i]>height[j]) j--;
            else{
                i++;
                j--;
            }
        }

        return maxArea;
    }
};