class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int ans =0;
        int l=0;
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
            if(f[s[i]]>1){
                while(l<i && f[s[i]]>1){
                    f[s[l]]--;
                    l++;
                }
            }
            ans = max(ans,i-l+1);
        }

        return ans;
    
    }
};
