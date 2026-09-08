class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int, int> m1;
      for(int i =0;i<nums.size();i++){
        m1[nums[i]]+=1;
      }
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q1;
{
    for(auto const& [value,key]:m1){
        q1.push({key,value});
        if(q1.size()>k){
            q1.pop();
        }
    }
    vector<int > v2;
    int a = q1.size();
    for(int i=0;i<a;i++){
       v2.push_back(q1.top().second);
       q1.pop();
    }
return v2;
}

    }
};
