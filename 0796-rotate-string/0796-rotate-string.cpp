class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length()!=goal.length()) // not len not eqal return false 
            return false;

        string str = s + s; // concat string 
        size_t found = str.find(goal);  // 
       
        if(found != string::npos){
            return true;
        }
        else{
            return false;
        }
        
    }
};