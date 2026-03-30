class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0;
        int hi = nums.size()-1;
        int ans = INT_MAX;
        while(low<=hi){
            int mid = low + (hi-low)/2;
            if(nums[low]<=nums[mid]){
                ans = min(ans,nums[low]);
                low = mid+1;
            }else{
                ans = min(ans,nums[mid]);
                hi = mid-1;
            }
        }
        return ans;
    }
};
