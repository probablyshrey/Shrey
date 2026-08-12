#include<set>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s; int ans=1; int fin=1;
        if (nums.size()==0)
        {
            return 0;
        }
        for (int i: nums)
        {
            s.emplace(i);
        }
        for(auto i=s.begin(); i!=s.end(); i++)
        {
            if (next(i)!=s.end())
            {
                if(*next(i)-*i==1)
                {
                    ans++;
                    fin=max(ans, fin);
                }
                else{
                    fin=max(ans, fin);
                    ans=1;
                }
            }
        }
        return fin; 
    }
};