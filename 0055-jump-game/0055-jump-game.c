bool canJump(int* nums, int numsSize) {
    int max=nums[0];
    for (int i=0; i<numsSize; i++)
    {
        if (i>max)
        {
            return false;
        }
        if (nums[i]+i>max)
        {
            max=nums[i]+i;
        }
        if (max>=numsSize-1)
        {
            return true;
        }
    }
    return true;
}