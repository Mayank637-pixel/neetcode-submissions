class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int minn=1;

        
        int maxx = 0;
        for (int pile : piles) {
            maxx = max(maxx, pile);
        }
        
        int minimum = maxx;
        while(minn<=maxx){
           int mid_value=(maxx+minn)/2;
           int total=0;
           for (int i = 0; i < piles.size(); i++) {
               
                total += (piles[i] + mid_value - 1) / mid_value;
            }
           if(total<=h){
            minimum=min(minimum,mid_value);
            maxx=mid_value-1;
            
           }
           else if(total>h){
            minn=mid_value+1;
            
           }
           
           
        }
        return minimum;
    }
};
