class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1=num1.size()-1;  // declare lenght of num1;
        
        int len2=num2.size()-1; // declare the length of num1
        
        int carry =0;
        
        string answer=""; // answer will store in string
        
        while(len1>=0 && len2>=0) 
            
        {int sum = (num1[len1]-'0')+(num2[len2]-'0')+carry; // sum of num1 and num2 after cnverting the string to int
         carry =sum/10;  
         
          sum%=10;
         
            answer+=to_string(sum); // store the answer in form of string
         
            len1--;
         
            len2--;
         
         }
        
        while(len1>=0) 
        { 
            int sum=(num1[len1]-'0')+carry;
            carry=sum/10;
            sum%=10;
            answer+=to_string(sum);
            len1--;
           
        }
        while(len2>=0) 
        {
            int sum=(num2[len2]-'0')+carry;
            carry=sum/10;
            
            sum%=10;
            answer+=to_string(sum);
            
            len2--;
        }
        if(carry)
        {
            answer+=to_string(carry); 
        }
        
        reverse(answer.begin(),answer.end()); // reverse the string 
        
        
        return answer;

        
        
        
        
        
    }
};