class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        if (word.length()==1)
        {
            return true;
        }
        if (word.length()==2)
        {
            if (word[0]>=97 && (word[1]<=90))
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        if ((word[0]<=90) && (word[1]<=90))
        {
            for (int i=2; i<word.length(); i++)
            {
                if (word[i]>=97)
                {
                    return false;
                }
            }
        }
        else if ((word[0]<=90) && (word[1]>=97))
        {
            for (int i=2; i<word.length(); i++)
            {
                if (word[i]<97)
                {
                    return false;
                }
            }
        }
        else if ((word[0]>=97) && (word[1]>=97))
        {
            for (int i=2; i<word.length(); i++)
            {
                if (word[i]<97)
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
        return true;
    }
};