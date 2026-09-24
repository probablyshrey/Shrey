class Solution {
public:
    int bin(vector<int>& a, int target,int low,int high)
    {
        if (low>high) return -1;
        int mid=low+(high-low)/2;
        if (a[mid]==target) return mid;
        if (a[mid]<target)
        {
            return bin(a, target, mid+1, high);
        }
        if (a[mid]>target)
        {
            return bin(a, target, low, mid-1);
        }
        return -1;
    }
    int leftright(vector<int>& a,int target, int low, int high)
    {
        if (low>high) return -1;
        int mid=low+(high-low)/2;
        if (a[mid]==target) return mid;

        if (a[low]<=a[mid])
        {
            if (target >= a[low] && target < a[mid]){
                return bin(a, target, low, high);
            }
            else{
                return leftright(a, target, mid+1, high);
            }
        }
        else if(a[high]>a[mid])
        {
            if (target > a[mid] && target <= a[high])
            {
                return bin(a, target, mid+1, high);
            }
            else{
                return leftright(a, target, low, mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return leftright(nums, target, 0, nums.size()-1);
    }
};