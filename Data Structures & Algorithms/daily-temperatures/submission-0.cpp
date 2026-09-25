class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector <int> v1(temperatures.size(),0);
        stack <int> s1;
        
        for(int i=0; i<temperatures.size();i++){
            while((!s1.empty()) && (temperatures[i]>temperatures[s1.top()])){
                int index=s1.top();
                s1.pop();
                v1[index]=(i-index);
                
            }
            s1.push(i);
        }
        return v1;
    }
};
