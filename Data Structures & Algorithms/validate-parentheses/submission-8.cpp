class Solution {
public:
    bool isValid(string s) {
       stack <char> s1;
        if(s.length()<2){
            return false;
        }
        for(int i=0; i<s.length(); i++){
         if(!s1.empty()){    
            if(s[i]==')' && s1.top()=='('){
            s1.pop();
            continue;
        }
        if(s[i]==']' && s1.top()=='[' ){
            s1.pop();
            continue;
        }
        if(s[i]=='}' && s1.top()=='{' ){
            s1.pop();
            continue;
            }
         }
            s1.push(s[i]); 
          
        }
        if(s1.empty()){
            return true;
        }
        else{
            return false;
        } 
    }
};
