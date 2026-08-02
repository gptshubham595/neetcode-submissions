class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> m;
        m[')']='(';
        m[']']='[';
        m['}']='{';
        for(auto &i:s){
            if(m.count(i) && !st.empty() && st.top()==m[i])
                st.pop();
             else
                st.push(i);
        }
        return st.empty();
    }
};
