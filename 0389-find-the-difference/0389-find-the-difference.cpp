class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int size=max(s.size(),t.size());
        for(int i=0;i<size;i++)
        {
            if(s[i]!=t[i])
            {
                return t[i];
            }
        }
        return NULL;
        
    }
};