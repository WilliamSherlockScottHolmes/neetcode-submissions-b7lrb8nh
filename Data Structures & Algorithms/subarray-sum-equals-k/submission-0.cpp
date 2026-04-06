class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
         mp[0]=1;
        int count=0;
        int cur=0;
        for(int i=0;i<nums.size();i++)
        {
            cur+=nums[i];
            if(mp.find(cur-k)!=mp.end())
            {
                count+=mp[cur-k];
            }
            mp[cur]++;
        }
        return count;
    }
};