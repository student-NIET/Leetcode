class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int start = 0;
        int end = 0;
        long long sum = 0;
        long long count = 0;
        int n = nums.size();


        while (end < n){
            sum += nums[end];

            while(sum * (end - start + 1) >= k && start <= end){
                sum -= nums[start];
                start++;
            }
            count += 1 + (end - start);
            end++;
        }
        return count;
    }
};