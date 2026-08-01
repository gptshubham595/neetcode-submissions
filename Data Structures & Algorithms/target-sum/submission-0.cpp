class Solution {
public:
    int solve(vector<int>& nums, int W, int n, int sum){
        if(n==0){
            if(sum == W)
                return 1;
            return 0;
        }
        int t1=solve(nums,W,n-1,sum+nums[n-1]);
        int t2=solve(nums,W,n-1,sum-nums[n-1]);
        return t1+t2;
    }
    int findTargetSumWays(vector<int>& nums, int W) {
        return solve(nums,W,nums.size(),0);
    }
};
