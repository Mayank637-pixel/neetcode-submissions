class Solution {
public:
    int characterReplacement(string s, int k) {
        vector <int> frequency(26,0);
       int max_frequency=0;
       int size=0;
       int l=0;
       for (int i=0; i<s.length(); i++){
        frequency[s[i]-'A']++;
        max_frequency=max(max_frequency, frequency[s[i]-'A']);
        if((i-l+1)-max_frequency>k){
            frequency[s[l]-'A']--;
            l++;
        }
        size=max(size,i-l+1);
       }
       return size;
    }
};
