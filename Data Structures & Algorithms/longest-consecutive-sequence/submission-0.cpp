class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        //2,3,4,5,6,10,20
        int ans=0;
        for(auto &i:s){
            if(s.find(i-1) == s.end()){
                int cn=i;
                int cs=1;
                while(s.find(cn+1)!=s.end()){
                    cn++,cs++;
                }
                ans = max(ans,cs);
            }
        }

        return ans;
    }
};

