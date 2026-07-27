class KthLargest {
public:
    priority_queue<int,vector<int>, greater<int>> minH;    
    int k=0;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(auto &i:nums){
            push_ele(i);
        }
    }

    void push_ele(int n){
        if(minH.size()<k)
                minH.push(n);
            else if(n>minH.top()){
                minH.push(n);
                if(minH.size()>k)
                    minH.pop();
            }
    }
    
    int add(int val) {
        push_ele(val);

        return minH.top();
    }
};
