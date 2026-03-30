class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int hi = numbers.size()-1;
        while(low<hi){
            if(numbers[low]+numbers[hi]==target){
                return {low+1,hi+1};
            }else if(numbers[low]+numbers[hi]<target){
                low++;
            }else{
                hi--;
            }
        }
    }
};
