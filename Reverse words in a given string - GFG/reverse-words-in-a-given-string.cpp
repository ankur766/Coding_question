//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string. swap st[i],str[n]
    
    
    string reverseWords(string s) 
    
    
    { 
        // code here 
        reverse(s.begin(),s.end());
        s.insert(s.end(),'.');
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
        }
        s.pop_back();
        return s;
    
    
}
    
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends