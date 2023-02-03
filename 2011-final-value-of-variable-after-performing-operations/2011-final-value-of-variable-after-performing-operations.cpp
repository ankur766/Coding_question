class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int x=0; // declare x=0;
        
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="--X" || operations[i]=="X--") // check contion  if operation of index i == --x or x-- then x will mins 1 
            {
                x -=1;
            }
             else if ( operations[i]=="X++" || operations[i]=="++X" )// check contion  if operation of index i == --x or x-- then x will plus 1 
            
             {
                 x+=1;
             }
            else{
                continue; //  if both contion will not satifed then  it  loop will cotinue to check next index 
            }
        }
        
        return x; // return answer 
        
    }
};