class Solution {
public:
    string interpret(string command ) {
        string parser;
        
       for(int i=0;i<command.length();i++){
            if(command[i]=='G')  parser+=command[i];
            if(command[i]=='(' && command[i+1]==')')  parser+='o';
            if(command[i]=='(' && command[i+1]=='a'&&command[i+2]=='l' )  parser+="al"; 
        }
        return  parser;
        
    }
};