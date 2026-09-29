class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        // Step 1: Find the pivot
        int gola = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                gola = i;
                break;
            }
        }

        // Step 2: If no pivot, reverse entire array
        if (gola == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the element just greater than pivot
        int swap_index = gola;

        for (int j = n - 1; j > gola; j--) {
            if (nums[j] > nums[gola]) {
                swap_index = j;
                break;
            }
        }

        // Step 4: Swap pivot and selected element
        swap(nums[gola], nums[swap_index]);

        // Step 5: Reverse the part after pivot
        reverse(nums.begin() + gola + 1, nums.end());
    }
};