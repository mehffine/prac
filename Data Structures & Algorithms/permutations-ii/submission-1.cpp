class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(vector<int> &nums, vector<int> &hmap){
        int n = nums.size();
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0; i<n; i++){
            if(hmap[i]>0) continue;
            temp.push_back(nums[i]);
            hmap[i]++;
            solve(nums,hmap);
            temp.pop_back();
            hmap[i]--;
        }


    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> hmap(nums.size(),0);
        solve(nums,hmap);
        //return ans;

        set<vector<int>> s;
        for(auto x : ans){
            s.insert(x);
        }
        vector<vector<int>> res;
        for(auto x : s){
            res.push_back(x);
        }
        return res;
    }
};