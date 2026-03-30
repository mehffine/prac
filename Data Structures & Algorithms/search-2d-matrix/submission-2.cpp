class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            int low = 0;
            int hi = m-1;
            while(low<=hi){
                int mid = low + (hi-low)/2;
                if(matrix[i][mid]==target){
                    return true;
                }else if(matrix[i][mid]>target){
                    hi = mid - 1;
                }else{
                    low = mid+1;
                }
            }
        }
    return false;
    }
};
