class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long n=0; long long len=0;long long sum=0;
        long long l=0, r=1;
        sum=nums[l];
        if(sum<k)
        {
            n++;
        }
        while(r<nums.size())
        {
            len=r-l+1;
            sum+=nums[r];
            while((sum*len)>=k)
            {
                sum-=nums[l];
                len--;
                l++;
            }
            n+=len;
            r++;
        }
        return n;
    }
};