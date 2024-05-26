class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left = 0;
        int right = height.size()-1;
        int maxarea = 0;
        
        while(left < right){
            int width = right - left;
            int currarea = min(height[left],height[right])*width;
            maxarea = max(maxarea,currarea);
            
            if (height[left] > height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxarea;
        
            }
        };