#import <math.h>
bool judgeSquareSum(int c) {
    int low=0;
    int high=sqrt(c);
    while (low<=high)
    {
        if (pow(low,2)+pow(high,2)==c)
        {
            return true;
        }
        else if (pow(low,2)+pow(high,2)>c)
        {
            high--;
        }
        else if (pow(low,2)+pow(high,2)<c)
        {
            low++;
        }
    }
    return false;
}