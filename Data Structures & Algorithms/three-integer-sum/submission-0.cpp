class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int k=nums[i];
            int l=i+1, r= nums.size()-1;
            while(l<r){
                int s=k+nums[l]+nums[r];
                if(s>0){
                    r--;
                }
                else if(s<0){
                    l++;
                }
                else{
                    ans.insert({k,nums[l],nums[r]});
                    l++,r--;
                }
            }
        }
        return {ans.begin(),ans.end()};
    }
};
