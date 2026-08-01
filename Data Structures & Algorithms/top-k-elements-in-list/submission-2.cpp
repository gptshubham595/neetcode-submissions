class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        unordered_map<int,int> f;
        int hf=0;
        for(auto &i:n){f[i]++;}
        // f[1]=1
        // f[2]=3
        // f[3]=1
        // hf= 3
        vector<pair<int,int>> v;
        for(auto &[u,k]:f)
            v.push_back({k,u});
        sort(v.rbegin(),v.rend());
        // 3->2
        // 1->1,3

        vector<int> ans;
        for(auto &[i,j]:v){
            if(k<=0)
                return ans;
            k--;
            ans.push_back(j);
        }

        return ans;
    }   
};
