class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int,int> m;
        for(int i=0;i<n.size();i++){
            if(m.count(t-n[i])){
                return {m[t-n[i]],i};
            }
            m[n[i]]=i;
        }

        return {-1,-1};
    }
};
