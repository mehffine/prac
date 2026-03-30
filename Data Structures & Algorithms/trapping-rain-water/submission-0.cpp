class Solution {
public:

    int maxi(int x,int y, vector<int>& height){
        int maxi = 0;
        for(int i=x; i<y; i++){
            maxi = max(maxi,height[i]);
        }
        return maxi;
    }
    int trap(vector<int>& height){
        int total = 0;
        int n = height.size();
        for(int i=0; i<n; i++){
            int lmax = maxi(0,i,height);
            int rmax = maxi(i,n,height);
            if(height[i]<lmax && height[i]<rmax){
                total += min(lmax,rmax) - height[i];
            }
        }
        return total;
    }
};
