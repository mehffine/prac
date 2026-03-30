class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int hi = nums.size()-1;
        while(low<=hi){
            int mid = low+(hi-low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                low = mid;
                low++;
            }else{
                hi=mid;
                hi--;
            }
        }
    return -1;
    }
};
