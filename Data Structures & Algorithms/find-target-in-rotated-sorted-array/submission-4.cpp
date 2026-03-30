class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int hi = nums.size()-1;
        int ans = -1;
        while(low<=hi){
            int mid = low + (hi-low)/2;
            if(nums[mid]==target){
                ans = mid;
                return ans;
            }
            if(nums[low]==target){
                return low;
            }
            if(nums[hi]==target){
                return hi;
            }
            else if(nums[low]<=nums[mid]){
                if((nums[low]<=target)&&(target<=nums[mid])){
                    hi = mid-1;
                }else{low=mid+1;}
            }else{
                if((nums[mid]<=target)&&(target<=nums[hi])){
                    low = mid+1;
                }else{
                    hi = mid-1;
                }
            }
        }
        return ans;
    }
};
