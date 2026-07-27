class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int, int> freq;

        // Count frequency
        for (int x : nums) {
            freq[x]++;
        }

        // Find maximum frequency
        int maxi = 0;
        for (auto p : freq) {
            maxi = max(maxi, p.second);
        }

        // Sum frequencies having maximum frequency
        int ans = 0;
        for (auto p : freq) {
            if (p.second == maxi)
                ans += p.second;
        }

        return ans;
    }
};