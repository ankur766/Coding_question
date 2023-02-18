class Solution {
public:
    int myAtoi(string s) {
       
       stringstream ss; 
        ss<<s;
        int nums=0;
        ss>>nums;
        return nums;
            
        
    }
};