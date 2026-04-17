class Solution {
public:

    vector<vector<int>> ans;
    vector<int> temp;

    void solve(int i, int n, int k){
        if(k==0){
            ans.push_back(temp);
            return;
        }
        if(i>n) return;
        //take
        temp.push_back(i);
        solve(i+1,n,k-1);

        //not take
        temp.pop_back();
        solve(i+1,n,k);
    }
    vector<vector<int>> combine(int n, int k) {
        solve(1,n,k);
        return ans;
    }
};