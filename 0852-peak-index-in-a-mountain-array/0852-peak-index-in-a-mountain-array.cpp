class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0, high=arr.size()-1;
        while(low<=high){
            int m=low+(high-low)/2;
            if(m==0)
            {
                if (arr[m+1]>arr[m]){
                    return m+1;
                }
                else{
                    return m;
                }
            }
            else if (m==arr.size()-1)
            {
                if (arr[m-1]<arr[m]){
                    return m;
                }
                else{
                    return m-1;
                }
            
            }
            if (arr[m-1]>arr[m]){
                high=m-1;
            }
            else if (arr[m+1]>arr[m]){
                low=m+1;
            }
            else if ((arr[m-1]<arr[m])&&(arr[m+1]<arr[m])){
                return m;
            }
        }
        return -1;
    }
};