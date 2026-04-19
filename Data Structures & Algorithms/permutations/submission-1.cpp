class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    int hmapsize(vector<int>& hmap){
        int cnt = 0;
        for(auto x : hmap){
            if(x>0) cnt++;
        }
        return cnt;
    }
    void solve(int i, vector<int> &nums,vector<int>& hmap){
        int n = nums.size();
        while(temp.size()==n){
            // if(hmapsize(hmap)==n){
            //     ans.push_back(temp);
            // }
            ans.push_back(temp);
            return;
        }
        
        for(int idx = 0; idx<n; idx++){
            if(hmap[idx]>0) continue;
            temp.push_back(nums[idx]);
            hmap[idx]++;
            solve(idx+1,nums,hmap);
            hmap[idx]--;
            temp.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> hmap(n,0);
        solve(0,nums,hmap);
        return ans;
    }
};
