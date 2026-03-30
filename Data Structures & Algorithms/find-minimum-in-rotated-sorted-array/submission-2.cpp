class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0;
        int hi = nums.size()-1;
        int ans = INT_MAX;
        while(low<hi){
            int mid = low + (hi-low)/2;
            if(nums[mid]<nums[hi]){
                hi = mid;
            }else{
                low = mid+1;
            }
        }
        return nums[low];
    }
};
