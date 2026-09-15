class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=0;
        int s=1;
        int net_difference=0;
        while(s<=prices.size()-1){
            int difference=prices[s]-prices[b];
            if(difference>net_difference){
                net_difference=difference;
            }
            if(prices[s]<prices[b]){
                b=s;
            }
            s++;
        }
        return net_difference;
    }
};
