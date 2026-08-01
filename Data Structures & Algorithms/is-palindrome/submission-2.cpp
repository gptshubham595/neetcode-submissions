class Solution {
public:
    bool isPalindrome(string s) {
       string k="";
       for(auto &c:s){
        char w=tolower(c);
        if((w>='a' && w<='z') || (w>='0' && w<='9'))
            k+=w;
       }
       int l=0,r=k.size()-1;
       while(l<r){
        if(k[l]!=k[r])
            return false;
        l++;r--;
       }
        return true;
    }
};
