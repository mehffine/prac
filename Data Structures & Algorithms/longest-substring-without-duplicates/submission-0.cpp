class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int gmax = 0; 
        for(int i=0; i<s.size(); i++){
            int hash[256] = {0};
            //string sub = "";
            for(int j=i; j<s.size(); j++){
                int maxi = 0;
                if(hash[s[j]]==1) break;
                //sub = sub + s[j];
                maxi = j-i+1;
                gmax = max(gmax,maxi);
                hash[s[j]]=1;
            }
        }
    return gmax;
    }
};
