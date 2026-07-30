class Solution {
public:
    bool isPalindrome(string s) {
        string k="";
        for(auto &i:s)
            if((i>='A' && i<='Z') || (i>='a' && i<='z') || (i>='0' && i<='9'))
                k+=tolower(i);
        cout<<k;
        int l=0, r=k.size()-1;
        while(l<=r){
            if(k[l]!=k[r])
                return false;
            l++,r--;
        }
        return true;
    }
};
