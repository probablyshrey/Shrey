class Solution {
public:
    int sumOfSquares(vector<int>& a) {
        int ans=0; int n=a.size();
        for (int i=0; i<n; i++)
        {
            int p=a[i];
            if(n%(i+1)==0) ans+=(p*p);
        }
        return ans;
    }
};