class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>intersectionarray;

        int n1 = nums1.size();
        int n2 = nums2.size();

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0;
        int j = 0;

        while(i < n1 && j < n2){
            if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }

            else{
                if(intersectionarray.size() == 0 || intersectionarray.back() != nums1[i]){
                    intersectionarray.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }
        return intersectionarray;
    }
};