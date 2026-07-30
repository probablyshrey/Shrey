class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;int high=height.size()-1;
        int ans=0; int area; int w; int h;
        while(low<high)
        {
            w=high-low;
            h=min(height[low], height[high]);
            area=w*h;
            ans=max(area, ans);
            if (height[low]<height[high])
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return ans;
    }
};