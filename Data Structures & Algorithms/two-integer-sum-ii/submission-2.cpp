class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<n.size();i++){
            if(m.count(target-n[i]))
                return {m[target-n[i]]+1,i+1};
            m[n[i]]=i;
        }
        return {-1,-1};
    }
};
