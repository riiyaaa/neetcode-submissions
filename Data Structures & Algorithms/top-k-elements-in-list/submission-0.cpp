class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        vector<int> fAns;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto& i:mp){
            ans.push_back(i.first);
        }

       sort(ans.begin(), ans.end(), [&](int a, int b) {
            return mp[a] > mp[b];   // higher frequency first
        });

        return vector<int>(ans.begin(), ans.begin() + k);
    }
};
