class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int n = s.size();
        int maxfreq = 0;
        int maxlen = 0;
        int hash[26] = {0};
        for(int i=0; i<n; i++){
            hash[s[i]-'A']++;
            int len = i-l+1;
            maxfreq=max(maxfreq,hash[s[i]-'A']);
            int changes = len - maxfreq;
            if(changes<=k){
                maxlen = max(maxlen,len);
            }else{
                hash[s[l]-'A']--;
                l++;
            }
        }
        return maxlen;
    }
};
