class Solution {
public:
    int largestInteger(int num) 
    {string s= to_string(num); // cnvert  int to string
        
        vector<int>even , odd; // declare vector for   store even and odd  no.
        
        for(int i=0;i<s.size();i++)
        { if((s[i]-'0')%2) // check s[i] is odd then store in  odd vector 
        { odd.push_back(s[i]);
         }
         else{
             even.push_back(s[i]);  // if  even  then store in even vector
         }
}
     // after the store element in vector 
        sort(even.begin(),even.end(),greater<int>());  // sort tthe vector in  dcndng frm  
        sort(odd.begin(),odd.end(),greater<int>());// sort tthe vector in  dcndng frm  
        int a=0 , b=0;
        string ans;
        for(int k=0; k<s.size();k++)
        
            { if((s[k]-'0')%2)
        { ans+=odd[a++];
         
         }
         else{
             ans+=even[b++];
         }
        }
        return stoi(ans);   // stoi  is function to cnvert sting to int
        
        
    }
};