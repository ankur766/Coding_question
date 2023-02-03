class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>stck;
        int cur=0;
        
         for(int i=0; i<s.size();i++)
         {
                if (s[i] == '(') {
                stck.push(cur);
                cur = 0;
            }
            else {
                cur += stck.top() + max(cur, 1);
                stck.pop();
            }
         }
        return cur;
                     
    }
};