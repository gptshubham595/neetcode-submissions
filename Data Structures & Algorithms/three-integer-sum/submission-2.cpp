class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        set<vector<int>> ans;
        sort(n.begin(),n.end());

        for(int i=0;i<n.size();i++){
            int l=i+1, h=n.size()-1;
            while(l<h){
                if(n[l]+n[h]+n[i] == 0){
                    ans.insert({n[i],n[l],n[h]});
                    l++,h--;
                    }
                else if(n[l]+n[h]+n[i]>0) h--;
                else l++;
            }
        }
        return {ans.begin(),ans.end()};
    }
};
