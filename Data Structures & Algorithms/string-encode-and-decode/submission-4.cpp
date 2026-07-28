class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto &i:strs){
            ans+=to_string(i.size())+"#"+i;
        }
        cout<<ans<<" ";
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size()){
            int j=s.find("#",i);
            int l=stoi(s.substr(i,j-i));
            string k=s.substr(j+1,l);
            res.push_back(k);
            i=j+1+l;
        }
        return res;
    }
};
