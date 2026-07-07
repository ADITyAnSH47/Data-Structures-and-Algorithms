// Time complexity: O(n)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int end=height.size()-1;
        int st=0;
        int area=0;
        while(st<end){
            int h=min(height[st],height[end]);
            area=max(area,h*(end-st));
            if(height[st]<height[end]){
                st++;
            }else{
                end--;
            }

        }

        return area;
    }
};