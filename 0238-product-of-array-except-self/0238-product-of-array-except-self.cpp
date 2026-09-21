class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>answer(n, 1);
        int pro=1; 
        for (int i=1; i<n; i++)
        {
            pro*=nums[i-1];
            answer[i]*=pro;
        }
        pro=1;
        for (int i=n-2; i>=0; i--)
        {
            pro*=nums[i+1];
            answer[i]*=pro;
        }
        return answer;
    }
};