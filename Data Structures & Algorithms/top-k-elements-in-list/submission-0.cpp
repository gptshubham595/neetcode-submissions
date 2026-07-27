class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> m;
       int hf=0;
       for(auto &i:nums){m[i]++; hf=max(hf,m[i]);}
       vector<vector<int>> v(hf+1); //3
       for(auto &[n,f]:m){
            v[f].push_back(n); 
       }
       vector<int> res;
       for(int i=hf;i>=0;i--){
            for(auto &j:v[i])
                if(k>0){
                    res.push_back(j);k--;
                }
                else
                    return res;
       }
        return res;
    }
};
