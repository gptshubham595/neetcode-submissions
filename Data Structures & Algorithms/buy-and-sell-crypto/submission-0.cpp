class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mi = p[0];
        int ans = 0;
        for(int i=1;i<p.size();i++){
            ans = max(ans, p[i]-mi);
            mi = min(mi, p[i]);
        }
        return ans;
    }
};
