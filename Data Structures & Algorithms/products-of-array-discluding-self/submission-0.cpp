class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
  int a =1;
  vector<int> v1;
  v1.push_back(a);
  for(int i=1;i<nums.size();i++){
    a=a*nums[i-1];
    v1.push_back(a);
  }
  a=1;
  vector<int> v2;
  v2.push_back(a);
  for(int i=(nums.size()-2);i>=0;i--){
    a=a*nums[i+1];
    v2.push_back(a);
  }
  vector<int> v3;
  for(int i=0;i<nums.size();i++){
   v3.push_back(v1[i]*v2[nums.size()-i-1]);
  }
  return v3;
    }
};
