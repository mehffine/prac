class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l =0;
        int maxlen = 0;
        vector<int> hash(256,-1);
        for(int i=0; i<n; i++){
            if(hash[s[i]]!=-1 && hash[s[i]]>=l) l=hash[s[i]]+1;
            hash[s[i]]++;
            int len = i-l+1;
            maxlen = max(len,maxlen);
            hash[s[i]]=i;
        }
        return maxlen;
    }
};
