class Solution {
public:
    vector<int> temp;
    vector<vector<int>> ans;
    void solve(vector<int>& nums,vector<vector<int>>& ans,int i){
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
    int subsetXORSum(vector<int>& nums) {
        solve(nums,ans,0);
        
        int total = 0;
        for(int i=0; i<ans.size(); i++){
            int xori = 0;
            for(int j=0; j<ans[i].size(); j++){
                xori = xori ^ ans[i][j];
            }
            total +=xori;
        }
        return total;
    }
};