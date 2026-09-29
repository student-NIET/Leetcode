class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;

        for(int i = 0; i <n;i++){
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};




//we take two var as currsum which stores current subarray sum and maxsum stores max sum
//acc to kadane's algo, if currsum<0, reset it to zero
// initialize currsum as zero and maxsum as INT_MIN