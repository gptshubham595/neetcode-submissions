class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        vector<int> pf(n.size(),1),sf(n.size(),1);
        for(int i=1;i<n.size();i++){
            pf[i]=pf[i-1]*n[i-1];
        }
        for(int i=n.size()-2;i>=0;i--){
            sf[i]=sf[i+1]*n[i+1];
        }
        //1,2,4,6
        //1,1,2,8,48
        //48,48,24,6,1
        //48,24
        vector<int> res(n);
        for(int i=0;i<n.size();i++){
            res[i]=pf[i]*sf[i];
        }
        return res;
    }
};
