class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size(); i++){
            int target = -(nums[i]);
            int low = i+1;
            int hi = nums.size()-1;
            if(i>0 && nums[i] == nums[i-1]) continue;
            while(low<hi){
                if(nums[low]+nums[hi]==target){
                    ans.push_back({-target,nums[low],nums[hi]});

                    //skip duplicates
                    while(low<hi && nums[low]==nums[low+1]) low++;
                    while(low<hi && nums[hi]==nums[hi-1]) hi--; 
                    
                    low++;
                    hi--;
                }else if(nums[low]+nums[hi]<target){
                    low++;
                }else{
                    hi--;
                }
            }
        }
        return ans;
    }
};
