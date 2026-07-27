class Solution(object):
    def longestContinuousSubstring(self, s):
        c=''
        count=0
        max=0
        alph='abcdefghijklmnopqrstuvwxyz'
        for i in s:
            c+=i
            if c in alph:
                count=len(c)
                if count>max:
                    max=count
                else:
                    count=0
            else:
                count=0
                c=i
        return max
        