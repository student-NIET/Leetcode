class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int currsum = 0;
        int maxsum = INT_MIN;

        for(int i = 0; i < n; i++){
            currsum += nums[i];
            maxsum = max(currsum, maxsum);
            if(currsum < 0){
                currsum = 0;
            }
        }
        return maxsum;
    }
};




//we take two var as currsum which stores current subarray sum and maxsum stores max sum
//acc to kadane's algo, if currsum<0, reset it to zero
// initialize currsum as zero and maxsum as INT_MIN