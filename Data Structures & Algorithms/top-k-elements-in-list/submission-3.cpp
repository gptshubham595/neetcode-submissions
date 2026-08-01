class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>, std::vector<pair<int,int>>, std::greater<pair<int,int>>> pq;

        unordered_map<int,int> fm;
        for(auto &i:n)fm[i]++;
        
        for(auto &[key,f]:fm){
            pq.push({f,key});
            if(pq.size()>k)
                pq.pop();
        }
        while(!pq.empty()){
            auto t=pq.top();pq.pop();
            ans.push_back(t.second);
        }
        return ans;
    }   
};
