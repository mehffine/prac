class Solution {
public:

    vector<vector<int>> ans;
    vector<int> temp;
    void solve(int i, vector<int>& nums, int target){
        int n = nums.size();
        if(target==0){
            ans.push_back(temp);
            return;
        }
        //take
        for(int j = i; j<n; j++){
            if(j>i && nums[j]==nums[j-1]) continue;

            if(nums[j]>target) break;
            temp.push_back(nums[j]);
            solve(j+1,nums,target-nums[j]);
            temp.pop_back();
        }


    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(0,candidates,target);
        return ans;
    }
};
