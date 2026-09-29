class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low =0;
        int high=matrix.size()*matrix[0].size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int row=mid/matrix[0].size();
            int column=mid%matrix[0].size();
            int value =matrix[row][column];
            if(value==target){
                return true;
            }
            else if(value>target){
                high=mid-1;
            }
            else if(target>value){
                low=mid+1;
            }
        }
        return false;
    }
};
