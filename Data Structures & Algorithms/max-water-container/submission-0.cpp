class Solution {
public:

    int area(int l, int h, vector<int> &nums){
        int areas = (h-l) * min(nums[l],nums[h]);
        return areas;
    }
    int maxArea(vector<int>& heights) {
        int curr_area = 0;
        int max_area = 0;
        int low = 0;
        int hi = heights.size()-1;
        while(low<hi){
            curr_area = area(low,hi,heights);
            max_area = max(max_area, curr_area);
            if(heights[low]<heights[hi]){
                low++;
            }else{
                hi--;
            }
        }
    return max_area;
    }
};
