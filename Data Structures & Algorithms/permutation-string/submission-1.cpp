class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        for(int i=0; i<n1; i++){
            hash1[s1[i]-'a']++;
            hash2[s2[i]-'a']++;
        }
        if(equal(hash1.begin(),hash1.end(),hash2.begin())==true) return true;

        for(int i=n1; i<n2; i++){
            hash2[s2[i]-'a']++;
            hash2[s2[i-n1]-'a']--;
            if(equal(hash1.begin(),hash1.end(),hash2.begin())==true) return true;
        }return false;
    }
};
