class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int len = 0;
        int n = s.size();
        int maxLen = 0;
        vector<int> hash(256, -1);

        while(r<n){
            char c = s[r];
            
            if(hash[c] != -1){
                if(hash[c]>=l){
                    l = hash[c]+1;
                }
            }
            len = r-l+1;
            maxLen = max(len, maxLen);
            hash[c]=r;
            r++;
        }
        return maxLen;
    }
};
