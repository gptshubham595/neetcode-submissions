class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto &i:tokens){
            if(i=="+" || i=="-" || i=="*" || i=="/"){
                if(!st.empty()){
                    int s=st.top();st.pop();
                    int f=st.top();st.pop();
                    if(i=="+")
                        st.push(f+s);
                    else if(i=="-")
                        st.push(f-s);
                    else if(i=="*")
                        st.push(f*s);
                    else if(i=="/")
                        st.push(f/s);
                }
            }
            else
                st.push(stoi(i));
        }
        return st.empty()? 0: st.top();
    }
};
