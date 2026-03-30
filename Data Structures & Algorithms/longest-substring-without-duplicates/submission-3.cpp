class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256,-1);
        int l = 0;
        int gmax = 0;
        for(int i=0; i<s.size(); i++){
            if(map[s[i]]!=-1 && map[s[i]]>=l) l=max(l,map[s[i]]+1);
            map[s[i]] = i;
            int len = i-l+1;
            gmax = max(gmax,len);
        }
        return gmax;
    }
};
