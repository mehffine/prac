class Solution {
public:
    vector<int> temp;
    void solve(vector<int> &nums, vector<vector<int>>& ans,int i){
        if(i>=nums.size()){
            ans.push_back(temp);
            return;
        }
        //take
        solve(nums,ans,i+1);
        temp.push_back(nums[i]);

        //not take
        solve(nums,ans,i+1);
        temp.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums,ans,0);
        return ans;
    }
};
