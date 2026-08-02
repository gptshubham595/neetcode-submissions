class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0;
        vector<int> f(26,0);
        int maxF=0;
        int ans =0;
        while(r<s.size()){
            f[s[r]-'A']++;
            maxF=max(maxF,f[s[r]-'A']);
            while(r-l+1-maxF>k && l<r){
                f[s[l]-'A']--;
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
       return  ans;
    }
};
