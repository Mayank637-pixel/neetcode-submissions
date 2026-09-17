class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1){
            return 1;
        }
        int max_size=0;
       unordered_map<char,int> m1;
       int l=0;
       int r=1;
       m1.insert({s[l],l});
       while(r<s.length()){
       while(m1.contains(s[r])){
        m1.erase(s[l]);
        l++;
       }
       m1.insert({s[r],r});
      max_size=max(max_size,r-l+1);
       r++;
        
       }
       return max_size;
    }
};
