class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]<nums[high])
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        int pivot=low;
        low=0;
        high=pivot;
        int ans;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>target)
            {
                high=mid-1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                ans=mid;
                break;
            }
        }
        if(nums[ans]==target) return ans;
        low=pivot;
        high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>target)
            {
                high=mid-1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                ans=mid;
                break;
            }
        }
        if(nums[ans]==target) return ans;
        else return -1;
    }
};
