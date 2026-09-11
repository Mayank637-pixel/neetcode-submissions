class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
            
        }
        sort(nums.begin(),nums.end());
       // vector <int> v1;
        int max_length=0;
        int current_length=1;
        //v1.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if((i==(nums.size()-1))&&((nums[i]-nums[i-1])==1)){
                current_length+=1;
                if(current_length>max_length){
                    max_length=current_length;
                    continue;
                }
            }
            if((nums[i]==nums[i-1])&&(i<nums.size()-1)){
                continue;
            }
            
          if((nums[i]-nums[i-1]!=1)){
             if(current_length>max_length){
                max_length=current_length;
                
             }
             current_length=1;
             continue;
          }
          current_length+=1;
        }
        return max_length;
    }
};
