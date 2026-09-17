class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_size = 0;
        // Direct index lookup array for 128 ASCII characters, initialized to -1
        vector<int> last_seen(128, -1);
        int l = 0;

        for (int r = 0; r < s.length(); r++) {
            if (last_seen[s[r]] >= l) {
                l = last_seen[s[r]] + 1;
            }
            last_seen[s[r]] = r;
            max_size = max(max_size, r - l + 1);
        }
        return max_size;
    }
};
