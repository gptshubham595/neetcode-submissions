class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>> m;
        for(auto &i:s){
            string k=i;sort(k.begin(),k.end());
            m[k].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto &[u,v]:m)
            ans.push_back(v);
        return ans;
    }
};
