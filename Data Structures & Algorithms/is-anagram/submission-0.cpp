class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()) return false;

        unordered_map <char, int> ms;
        for(int i = 0; i<s.size(); i++){
            ms[s[i]]++;
        }
        unordered_map <char, int> mt;
         for(int i = 0; i<t.size(); i++){
            mt[t[i]]++;
        }

        for(auto i:ms){
            if(i.second != mt[i.first]) return false;
        }
        return true;
    }
};
