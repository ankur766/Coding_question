class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // int size=max(s.size(),t.size());
        // for(int i=0;i<size;i++)
        // {
        //     if(s[i]!=t[i])
        //     {
        //         return t[i];
        //     }
        // }
        // return NULL;
      unordered_map<char, int>h;
        for(int i=0;i<s.size();i++)
        {
            h[s[i]]++;
            
        }
        for(int i=0;i<t.size();i++)
        {
          if(--h[t[i]]<0)
          {
              return t[i];
          }
           
        }
             
        return NULL;

        
    }
};