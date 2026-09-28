class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if(speed.size()==1){
            return 1;
        }
        stack <int> s1;
        vector<float> v2;
         vector<float> v3;
        vector <vector<float>> v1;
        int counter=1;
        float maximum=0;
        int result=0;
        for (int i=0; i<position.size();i++){
            v3.push_back(static_cast<float>(target-position[i]));
            v2.push_back(v3[i]/speed[i]);

           
        }
        for (int i=0;i<speed.size();i++){
          v1.push_back({v3[i],v2[i]});
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<speed.size();i++){
            
            if(v1[i][1] <= maximum){
              continue;
            }
            result+=1;
            maximum=v1[i][1];
        }
        return result;
    }
};
