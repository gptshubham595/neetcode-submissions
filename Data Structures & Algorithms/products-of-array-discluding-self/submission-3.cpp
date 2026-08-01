class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        vector<int> ans(n);
        vector<int> pf(n),sf(n);
        for(int i=1;i<n.size();i++)
            pf[i]=pf[i-1]*pf[i];
        // 1,2,8,48
        // 48,48,24,6
        for(int i=n.size()-2;i>=0;i--)
            sf[i]=sf[i+1]*sf[i];

        ans[0]=sf[1];
        ans[n.size()-1]=pf[n.size()-2];
        
        for(int i=1;i<n.size()-1;i++)
            ans[i]=pf[i-1]*sf[i+1];
        
        return ans;
    }
};
