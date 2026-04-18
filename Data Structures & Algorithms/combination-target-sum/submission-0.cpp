class Solution {
public:

    vector<vector<int>> res;
    vector<int> temp;
    void solver(int i,vector<int> &nums, int target){
        int n = nums.size();
        if(i>=n){
            return;
        }
        if(target==0){
            res.push_back(temp);
            return;
        }
        else if(target<0) return;

        //take
        temp.push_back(nums[i]);
        solver(i,nums,target-nums[i]);

        //not take
        temp.pop_back();
        solver(i+1,nums,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        solver(0,nums,target);
        return res;
    }
};
