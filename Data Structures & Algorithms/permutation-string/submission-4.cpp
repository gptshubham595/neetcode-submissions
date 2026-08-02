class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<int,int> f;
        unordered_map<int,int> cf;
        for(auto &i:s1)f[i-'a']++;
        int l=0,r=0;
        while(r<s2.size()){
            if(f.count(s2[r]-'a')){
                l=r;
                cf.clear();
                cf=f; 
                while(cf[s2[r]-'a']!=0){
                    // cout<<s2[r]<<" "<<cf[s2[r]]<<":";
                    cf[s2[r]-'a']--;
                    // cout<<s2[r]<<" "<<cf[s2[r]]<<endl;
                    r++;
                }
                // cout<<s2.substr(l,r-l);
                if(r-l==s1.size()) return true;
                else{
                    l++; r=l;}
            }else{
                r++;
            }
        }
        return 0;
    }
};
