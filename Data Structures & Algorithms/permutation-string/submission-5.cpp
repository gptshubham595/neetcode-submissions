class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> f(26,0),f2(26,0);
        for(auto &i:s1)f[i-'a']++;
        for(int i=0;i<s2.size();i++){
            f2[s2[i]-'a']++;
            if(i>=s1.size()){
                f2[s2[i-s1.size()]-'a']--;
            }
            if(f==f2) return true;
        }
        return 0;
    }
};
