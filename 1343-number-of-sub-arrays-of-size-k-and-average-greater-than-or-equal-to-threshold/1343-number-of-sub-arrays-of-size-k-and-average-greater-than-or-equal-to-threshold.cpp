class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int target = k * threshold;
        int sum = 0;
        int ans = 0;

        
        for (int i = 0; i < k; i++)
            sum += arr[i];

        if (sum >= target)
            ans++;

        
        for (int i = k; i < arr.size(); i++) {
            sum += arr[i];
            sum -= arr[i - k];

            if (sum >= target)
                ans++;
        }

        return ans;
    }
};