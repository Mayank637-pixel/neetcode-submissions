class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string ,vector<string>> map1;
       vector<vector<string>> vec1;
      for(int i=0;i<strs.size();i++){
        string temp_string=strs[i];
        sort(strs[i].begin(),strs[i].end());
        map1[strs[i]].push_back(temp_string);
         
      }  
       for(auto& [key, value]: map1){
            vec1.push_back(value);
        }
     return vec1; 
    }
    
};
