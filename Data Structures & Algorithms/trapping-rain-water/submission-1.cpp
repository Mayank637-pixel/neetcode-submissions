
class Solution {
public:
    int trap(vector<int>& height) {
        int water_stored=0;
        vector<vector<int>> v1;
        int max_left=height[0];
        int max_right=height[height.size()-1];
        //v1.push_back({max_left,0});
        for(int i=1;i<height.size();i++){
           max_left=max(max_left,height[i-1]);
           v1.push_back({max_left,0});
        }
        
        for (int i=height.size()-2;i>=0;i--){
            max_right=max(max_right,height[i+1]);
            v1[i][1]=max_right;
        }
        //v1[0][1]=max(max_right,height[0]);
         for(int i=0;i<height.size()-1;i++){
            if((min(v1[i][0],v1[i][1])-height[i])>0){
            water_stored +=min(v1[i][0],v1[i][1])-height[i];
            }
         }
         return water_stored;
    }
};
