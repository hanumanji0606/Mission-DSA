class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int lMax = 0;
        int rMax = 0;
        int water = 0;
        while(l < r){
…        return water;
    }
};
