class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>lm;
        vector<int>ans(nums.size(),1);
        int left=1;
        int right=1;
        for(auto i:nums)
        {
            lm.push_back(left);
            left*=i;
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i]=lm[i]*right;
            right*=nums[i];
        }
        return ans;
    }
};
