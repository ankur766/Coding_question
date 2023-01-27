#include<stack>
class Solution {
public:
    bool isValid(string s) {
       stack<char>temp;
        for(int i=0;i<s.length();i++)
        {
if(s[i]=='('|| s[i]=='{'||s[i]=='[')
{
temp.push(s[i]);
    }
        else {
            if(s[i]==')')
            {
                if(i==0 || temp.empty()|| temp.top()!='(')
                   {
                       return false;
                   } temp.pop();
       
                   }
                   if(s[i]==']')
            {
                if(i==0|| temp.empty()|| temp.top()!='[')
                   {
                       return false;
                   } temp.pop();
       
                   }
                   
                   if(s[i]=='}')
                    {
                       if(i==0|| temp.empty()|| temp.top()!='{')
                           {
                       return false;
                         } 
                          temp.pop();
       
                         }
                   }
        }
         return  temp.empty();
        
    }
};