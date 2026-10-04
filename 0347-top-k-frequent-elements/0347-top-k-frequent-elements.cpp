class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        unordered_map<int, int> mp;
        
        for(int x : nums) {
            mp[x]++;
        }
        
        vector<vector<int>> bucket(n + 1);
        
        for(auto it : mp) {
            int element = it.first;
            int freq = it.second;
            
            bucket[freq].push_back(element);
        }
        
        vector<int> ans;
        
        for(int freq = n; freq >= 1; freq--) {
            
            for(int element : bucket[freq]) {
                ans.push_back(element);
                
                if(ans.size() == k) {
                    return ans;
                }
            }
        }
        
        return ans;
    }
};