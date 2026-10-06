class Solution {
public:
    int minAddToMakeValid(string s) {
        int cl=0;
        stack<char> st;
        for (auto i: s)
        {
            if (i=='(') st.push(i);
            else if (i==')')
            {
                if (st.empty())
                {
                    cl++;
                }
                else
                {
                    st.pop();
                }
            }
        }
        while(!st.empty())
        {
            st.pop();
            cl++;
        }
        return cl;
    }
};