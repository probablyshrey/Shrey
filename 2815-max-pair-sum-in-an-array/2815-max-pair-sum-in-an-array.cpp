class Solution {
public:
    int maxdigit(int n)
    {
        int m=0;
        while(n>0)
        {
            int d=n%10;
            m=max(d, m);
            n/=10;
        }
        return m;
    }
    int maxSum(vector<int>& nums) {
        int maxsum=-1;
        map<int, int> m;
        for (auto i:nums)
        {
            int d=maxdigit(i);
            if(m.find(d)!=m.end())
            {
                maxsum=max(maxsum, (m[d]+i));
                m[d]=max(m[d], i);
            }
            else{
                m[maxdigit(i)]=i;
            }
        }
        return maxsum;
    }
};