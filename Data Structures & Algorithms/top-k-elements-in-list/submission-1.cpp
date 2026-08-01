class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        unordered_map<int,int> f;
        int hf=0;
        for(auto &i:n){f[i]++;hf=max(hf,f[i]);}
        unordered_map<int,vector<int>> m;
        for(auto &[u,v]:f)
            m[v].push_back(u);

        vector<int> ans;
        for(int i=hf;i>=0;i--){
            for(auto &j:m[i]){
                if(k<=0)
                    return ans;
                k--;
                ans.push_back(j);
            }
        }

        return ans;
    }   
};
