class Solution {
public:
    bool wordPattern(string pattern, string s) {
    vector<string> a;
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        a.push_back(word);
    }
    if (a.size()!=pattern.size()) return false;
    char b;
    map<char, string> m;
    for (int i=0; i<pattern.size(); i++)
    {
        b=pattern[i];
        if(m.find(b)!=m.end())
        {
            if (a[i]!=m[b]) return false;
        }
        for (auto it: m)
        {
            if ((it.second==a[i])&&(it.first!=b)) return false;
        }
        m[b]=a[i];
    }
    return true;
    }
};