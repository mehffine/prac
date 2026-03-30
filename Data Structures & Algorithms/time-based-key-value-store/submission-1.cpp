class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> tm;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        tm[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int low = 0;
        auto &vec = tm[key];
        int hi = vec.size() - 1;
        string ans ="";
        while(low<=hi){
            int mid = low+(hi-low)/2;
            if(vec[mid].first<=timestamp){
                ans = vec[mid].second;
                low = mid+1;
            }else{
                hi = mid - 1;
            }
        }
    return ans;
    }
};
