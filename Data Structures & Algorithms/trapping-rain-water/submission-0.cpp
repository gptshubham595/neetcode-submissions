class Solution {
public:
    int trap(vector<int>& h) {
        vector<int> pf(h),sf(h);
        for(int i=1;i<h.size();i++)
            pf[i]=max(pf[i-1],pf[i]);
        for(int i=h.size()-2;i>=0;i--)
            sf[i]=max(sf[i+1],sf[i]);
        int ans=0;
        for(int i=0;i<h.size();i++){
            ans += min(pf[i],sf[i])-h[i];
        }

        return ans;
    }
};
