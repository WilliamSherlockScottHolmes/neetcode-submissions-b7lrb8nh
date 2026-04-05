class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high=nums.size();
        int low=0;
        while(low<high)
        {
            int mid=(high+low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                high=mid;
                low=mid;
            }
        }
        if(nums[low]!=target) low=-1;
        return low;
    }
};
