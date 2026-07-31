class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1;
        int ans=0;
        while(l<r){
            int ca=(r-l)*min(h[l],h[r]);
            ans = max(ans,ca);
            if(h[l]<h[r])
                l++;
            else r--;
        }
        return ans;
    }
};
