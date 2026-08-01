class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return 0;
        unordered_map<char,int> f;
        for(auto &i:s)f[i]++;
        for(auto &i:t){f[i]--; if(f[i]<0) return 0;}
        for(auto &[u,v]:f)
            if(v!=0)
                return 0;

        return 1;
        
    }
};
