class Solution {
public:
    vector<string> ans;
    
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;
                char temp = st.top();
                st.pop();
                if((s[i]==')' && temp!='(')){
                    return false;
                }
            }
        }
        return st.empty();
    }

    void solve(string &s, int n){
        if(s.size()==n*2){
            if(isValid(s)){
                ans.push_back(s);
            }
            return;
        }

        //take (
        s.push_back('(');
        solve(s,n);
        s.pop_back();

        //take )
        s.push_back(')');
        solve(s,n);
        s.pop_back();
        
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        solve(s,n);
        return ans;
    }
};