class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>ss;
        for(auto it:nums)
        {
            if(ss.find(it)!=ss.end())
            {
                return true;
            }
            ss.insert(it);
        }
        return false;
    }
};
