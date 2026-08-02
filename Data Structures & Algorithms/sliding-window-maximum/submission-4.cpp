class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // 1,2,1,0,4,2,6
        // 2,2,4,4,6
        priority_queue<pair<int,int>> pq;
        int i=0;
        for(i=0;i<nums.size() && i<=k-2;i++){
            pq.push({nums[i],i});
        }
        
        vector<int> ans;
        int j=0;
        for(;i<nums.size();i++){
            pq.push({nums[i],i});
            while(!pq.empty() && pq.top().second<j){pq.pop();}
            ans.push_back(pq.top().first);
            j++;
        }
        return ans;
    }
};
