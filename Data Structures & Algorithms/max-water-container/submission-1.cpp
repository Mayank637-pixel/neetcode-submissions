class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area=0;
        int l=0;
        int r=heights.size()-1;
        while(r>l){
          int area=min(heights[l],heights[r])*(r-l);
          if(area>max_area){
            max_area=area;
          }
          if(heights[l]>=heights[r]){
            r--;
          }
          else{
            l++;
          }
        }
        return max_area;
    }
};
