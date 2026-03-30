class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        for(auto x : nums){
            map[x]++;
        }
        vector<pair<int,int>> pv;
        for(auto x : map){
            pv.push_back({x.second,x.first}); //swapped place of second and first to sort by second(ie. frequency).
        }
        sort(pv.rbegin(),pv.rend());
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(pv[i].second);
        }
    return res;
    }
};