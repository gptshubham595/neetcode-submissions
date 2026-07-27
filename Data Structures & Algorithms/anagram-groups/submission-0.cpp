class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(auto &i:strs){
            string u = i;
            sort(u.begin(),u.end());
            m[u].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto &[u,v]:m){
            vector<string> value;
            for(auto &i:v)value.push_back(i);
            ans.push_back(value);
        }

        return ans;
    }
};
