class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int i = 0, j = 1;

        while(j < n)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i + 1;
    }
};

// we take two pointers i and j
// where i contains unique element and j gives unique element to i
// i is at zeroth position and j is at 1st position
// if j got a unique element, it gives to i 
// and at last we need to return the size of array which contains unique element