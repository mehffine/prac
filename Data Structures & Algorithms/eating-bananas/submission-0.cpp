class Solution {
public:

    int time(vector<int>& arr, int x){
        int n = arr.size();
        int total = 0;
        for(int i=0; i<n; i++){
            total+=((arr[i]+x-1)/x);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            // mini = min(mini,piles[i]);
            maxi = max(maxi,piles[i]);
        }
        int low = 1;
        int hi = maxi;
        while(low<=hi){
            int mid = low + (hi-low)/2;
            if(time(piles,mid)>h){
                low = mid+1;
            }else{
                hi = mid-1;
            }
        }
    return low;
    }
};
