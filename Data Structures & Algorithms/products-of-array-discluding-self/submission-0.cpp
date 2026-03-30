class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> prefix;
        vector<int> post(n);
        
        int prod1 = 1;
        for(int i=0; i<n; i++){
            prod1 *= nums[i];
            prefix.push_back(prod1);
        }
        int prod2 = 1;
        for(int i=n-1; i>=0; i--){
            prod2 *= nums[i];
            post[i]=prod2;
        }
        for(int i=0; i<n; i++){
            if(i==0){
                ans.push_back(post[i+1]);
            }else if(i==n-1){
                ans.push_back(prefix[i-1]);
            }else{
                ans.push_back(prefix[i-1]*post[i+1]);
            }
        }
        return ans;
    }
};
