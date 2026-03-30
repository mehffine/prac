class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> ans;
        stack<int> st2;
        int n = temperatures.size();

        for(int i = n-1; i>=0; i--){
            while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()) st2.push(0);
            else st2.push(st.top()-i);
            st.push(i);
        }
        while(!st2.empty()){
            ans.push_back(st2.top());
            st2.pop();
        }
    return ans;
    }
};
