class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxfreq = 0; int maxlen = 0;
        int changes = 0;
        for(int i=0; i<n; i++){
            int hash[26] = {0};
            for(int j=i; j<n; j++){
                hash[s[j]-'A']++;
                maxfreq=max(maxfreq,hash[s[j]-'A']);
                int len = j-i+1;
                changes = len-maxfreq;
                if(changes<=k){
                    maxlen = max(maxlen,len);
                }else{
                    break;
                }
            }
        }
    return maxlen;
    }
};
