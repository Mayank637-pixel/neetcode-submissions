#include <string>
class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
      for (int i=0;i<strs.size();i++){
        int string_len=strs[i].length();
        s=s+to_string(strs[i].length())+'#'+strs[i];
      }
      return s;
    }

    vector<string> decode(string s) {
      if (s.empty()) return {};
        int i=0;
        int is_length=1;
        int len=0;
        string str="";
        vector<string> v1;
        
        while(s[i]!='#'){
          len=(len*10)+(s[i]-'0');
          i++;
        }
        i++;
        is_length=0;
       while(i<s.length()){
        
         if((s[i]=='#')&(is_length==1)){
          is_length=0;
          i++;
          continue;
         }
         if((len==str.length())&&(is_length==0)){
          len=0;
          is_length=1;
          v1.push_back(str);
          str="";
          continue;
         }
         
         if(is_length==1){
           len=(len*10)+(s[i]-'0');
           i++;
         }
         else if((is_length==0)&&(str.length()<len)){
           str=str+s[i];
           i++;
         }
       }
       v1.push_back(str);
       return v1;
    }
   
    }
;
