class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();

        int product = 1;
        int count = 0;
        int start = 0, end = 0;

        while(end < n){
            product *= nums[end];
            while(product >= k && start <= end){
                product /= nums[start];
                start++;

            }
            count += 1 + (end - start);
            end++;
        }
        return count;
    }
};