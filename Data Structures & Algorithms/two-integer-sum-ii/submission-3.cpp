class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        while(l<r){
            while((numbers[l]+numbers[r])>target){
                r-=1;
            }
            while((numbers[l]+numbers[r])<target){
                l+=1;
            }
            if((numbers[l]+numbers[r])==target){
                vector<int> v1;
                v1.push_back(l+1);
                v1.push_back(r+1);
                return v1;
            }
        }
    }
};
