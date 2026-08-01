class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>> m;
        for(auto &i:s){
            vector<int> v(26,0);
            for(auto &c:i)v[c-'a']++;
            string key="";
            for(auto &j:v){
                key+=j+'#';
            }
            m[key].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto &[u,v]:m)
            ans.push_back(v);
        return ans;
    }
};
