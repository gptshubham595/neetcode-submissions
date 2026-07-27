class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        if(s.size() != t.size())
            return false;
        for(auto &i:s)m[i]++;
        for(auto &i:t){m[i]--;if(m[i]<0)return false;}
        return true;
    }
};
