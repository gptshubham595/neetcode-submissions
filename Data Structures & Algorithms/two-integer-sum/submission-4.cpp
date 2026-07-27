class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        // 3,2,3
        // 6
        unordered_map<int,int> m;
        for(int i=0;i<n.size();i++){
            int c = target-n[i];
            if(m.count(c))
                return {m[c],i};
            m[n[i]]=i;
        }
    }
};
