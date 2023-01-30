class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       int carry=0;
        for(int i=num.size()-1; i>=0; i--){
            int sum =num[i]+carry+k%10;// get int sum to sore val of num of i carry that is  initialize  zero  and  k%10  give rem  that 34%10 =4;
            
             
            carry =0; // initialize zero bcoz again  new carry will added 
            num[i]=sum%10; // now store  lst val of  sum   sumn% 10 give lst no of  digits;
            carry =sum/10; // now carry will s tore for next index;
            
            k/=10;        
}
     while(k)//  
     {
          int val=k%10+carry;
         
            carry=val/10;
         
            num.insert(num.begin(), val%10);
            k/=10;
     }
        if(carry)// if carry will not zero after k =0; than wil added carry is s tarting of the index of vector 
        {
            num.insert(num.begin(), carry); //   carry will inserted at starting position of vector 
        }
        return num; // return answer
    }
};