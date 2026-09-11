class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==1||s.size()==0){
            return true;
        }
        int n=s.size();
        int l=0;
         int r=n-1;
       while((l<r)){
        
        while(!(isalnum(s[l]))){
            l+=1;
        }
        while(!(isalnum(s[r]))){
            r-=1;
        }
        if(l>r){
            return true;
        }
         cout<<s[l]<<'\n';
         if(s[l]<97){
            s[l]+=32;
         }
         cout<<s[l]<<'\n';
         if(s[r]<97){
            s[r]+=32;
         }
         //cout<<s[l]<< " : "<<s[r]<<'\n';
         if(s[l]!=s[r]){
            return false;
         }
         l+=1;
         r-=1;
         
       }
       return true;
    }
};
