class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> f1;
        unordered_map<char,int> f2;
        for(auto &i:t)f1[i]++;
        int minL=INT_MAX;
        int minS=0;
        int l=0,r=0;
        while(r<s.size()){
            if(f1.count(s[r])){
                l=r;
                f2.clear();
                f2=f1;
                int lc=0;
                while(lc!=t.size() && r<s.size()){
                    if(f2.count(s[r]) && f2[s[r]]>0){
                        f2[s[r]]--;
                        lc++;
                    }
                    r++;
                }
                if(lc==t.size()){
                    int cl = r-l;
                    if(cl<minL){
                        minL=cl;minS=l;
                    }
                }

            l++,r=l;

            }else{
                r++;
            }
        }
        return minL == INT_MAX? "" : s.substr(minS, minL);
    }
};
