class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans;
        for (int i=0; i<nums.size()-1; i+=2)
        {
            ans=nums[i];
            if (nums[i]!=nums[i+1])
            {
                return ans;
            }
        }
        return nums.back();
    }
};