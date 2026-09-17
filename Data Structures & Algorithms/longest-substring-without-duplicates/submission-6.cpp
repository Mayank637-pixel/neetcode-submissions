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
       return max_size;class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_size = 0;
        // Maps the character to its index
        unordered_map<char, int> m1;
        int l = 0;

        for (int r = 0; r < s.length(); r++) {
            // If the character exists and its last position is inside our current window
            if (m1.count(s[r]) && m1[s[r]] >= l) {
                l = m1[s[r]] + 1; // Jump 'l' instantly past the duplicate
            }
            
            // Fix: Use array syntax [] to always OVERWRITE/UPDATE the index
            m1[s[r]] = r; 
            max_size = max(max_size, r - l + 1);
        }
        return max_size;
    }
};

    }
};
