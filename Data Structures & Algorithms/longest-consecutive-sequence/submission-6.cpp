class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        // set <- num
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=1;
        for(auto &i:s){
            int cn=i;
            int cs=1;
            if(s.find(cn-1)!=s.end())
                continue;
            while(s.find(cn+1)!=s.end()){
                cn++;
                cs++;
                ans=max(ans,cs);
            }
        }
        

        return ans;
    }
};

