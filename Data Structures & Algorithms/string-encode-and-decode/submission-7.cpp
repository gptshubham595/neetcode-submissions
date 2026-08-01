class Solution {
public:

    string encode(vector<string>& s) {
        string ans="";
        for(auto &i:s){
            ans+=to_string(i.size())+'^'+i;
        }
        cout<<ans<<endl;
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(int i=0;i<s.size();){
            int j=s.find('^',i);
            // cout<<j<<";";
            string n=s.substr(i,j);
            // cout<<n<<",";
            int l=stoi(n);
            // cout<<l;
            ans.push_back(s.substr(j+1,l));
            i=j+l+1;
        }
        return ans;
    }
};
