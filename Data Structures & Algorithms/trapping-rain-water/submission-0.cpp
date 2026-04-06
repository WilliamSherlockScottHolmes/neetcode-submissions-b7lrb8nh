class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;
        int left=0;
        int right=height.size()-1;
        int lm=height[left];
        int rm=height[right];
        while(left<right)
        {
            if(lm<rm)
            {
                left++;
                lm=max(lm,height[left]);
                sum+=lm-height[left];
            }
            else
            {
                right--;
                rm=max(rm,height[right]);
                sum+=rm-height[right];
            }
        }
        return sum;
    }
};
