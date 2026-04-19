class Solution {
public:

    vector<vector<int>> ans;
    vector<int> temp;

    void solve(int i,vector<int>& nums){
        if(i>=nums.size()){
            ans.push_back(temp);
            return;
        }

        //take
        temp.push_back(nums[i]);
        solve(i+1,nums);

        //not take
        temp.pop_back();
        solve(i+1,nums);    
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        solve(0,nums);
        //return ans;
        set<vector<int>> s;
        for(auto x : ans){
            sort(x.begin(),x.end());
            s.insert(x);
        }
        vector<vector<int>> res;
        for(auto x : s){
            res.push_back(x);
        }
        return res;
    }
};
