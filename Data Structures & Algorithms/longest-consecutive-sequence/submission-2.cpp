class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        if (nums.empty()) return 0;
        if(nums.size()==1) return 1;
        for(auto x : nums){
            s.insert(x);
        }
        int maxcount = 1;
        int count = 1;

        auto i = s.begin();
        int prev = *i;
        i++;

        while(i!=s.end()){
            if(*i==prev + 1){
                count++;
            }else{
                count = 1;
            }
            maxcount = max(count,maxcount);
            prev = *i;
            i++;
        }
    return maxcount;
    }
};
