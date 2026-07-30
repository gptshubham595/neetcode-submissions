class Solution {
public:
    void insert(vector<int> &nums, int n){
        if(nums.size()==0 || nums[nums.size()-1]<=n){
            nums.push_back(n);
            return;
        }
        int l=nums[nums.size()-1];
        nums.pop_back();
        insert(nums,n);
        nums.push_back(l);
    }
    void sort(vector<int> &nums, int n){
        if(n<=0)
            return;
        int l=nums[n];
        nums.pop_back();
        sort(nums, n-1);
        insert(nums,l);
    }
    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()<2)
            return nums;
        sort(nums, nums.size()-1);
        return nums;
    }
};