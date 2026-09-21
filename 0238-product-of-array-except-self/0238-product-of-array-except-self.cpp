class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>answer;
        int pro=1; int prow=1; int c=0;
        for(auto i: nums)
        {
            if ((i==0)&&(c<1))
            {
                c++;
                continue;
            }
            pro*=i;
        }
        cout<<c;
        for(int i=0; i<nums.size(); i++)
        {
            if (c!=0)
            {
                if (nums[i]!=0)
                {
                    answer.push_back(0);
                }
                else{
                    answer.push_back(pro);
                }
            }
            else{
                answer.push_back(pro*pow(nums[i], -1));
            }
        }
        return answer;
    }
};