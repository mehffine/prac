class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int hi = s.length()-1;
        while(low<hi){
            while(low<hi && !isalnum(s[low])) low++;
            while(low<hi && !isalnum(s[hi])) hi--;
            if((tolower(s[low])!=(tolower(s[hi])))) return false;
            else{
                low++;
                hi--;
            }
            // remove spaces 
        }
        return true;
    }
};
