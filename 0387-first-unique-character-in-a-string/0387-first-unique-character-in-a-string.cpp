class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int>freq_of_letter(26,0);
        
        //for storing fequency 
        for(int i=0;s[i]!='\0';++i)
        {
            freq_of_letter[s[i]-'a']+=1;
            
            }
        // check freq of letter is ==1  then return 
          for(int i=0;s[i]!='\0';++i)
        {
           if(freq_of_letter[s[i]-'a']==1)
           {
               return i;
           }
            
            }
        
        return -1;
        
    }
};