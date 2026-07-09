class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
            int i = 0;   //denotes 0
            int j = 0;   // denotes 1
            int k = n - 1;   //denotes 2

            while(j<=k){

                if(nums[j] == 1){
                    j++;
                }
                else if(nums[j] == 2){
                    swap(nums[j], nums[k]);
                    k--;
                }
                else{
                    swap(nums[j], nums[i]);
                    i++;
                    j++;
                }

            }
        
    }
};












//i take care of 0, j take care 1 and k take care of 2
//put i and j on Oth index and put k on last index
//ab swap(nums[j], nums[k]) qki j=2 and 'k' ke pass 2 hona chaiye
//ab last wala k already 2 ho gya hai to ham k ko left shift krdege
//swap(nums[j], nums[i])