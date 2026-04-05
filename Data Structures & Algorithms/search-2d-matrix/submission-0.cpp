class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top=0,bot=matrix.size()-1;
        int col=matrix[0].size()-1;
        int row;
        while(top<=bot)
        {
            int mid=top+(bot-top)/2;
            if(matrix[mid][col]<target)
            {
                top=mid+1;
            }
            else if(matrix[mid][0]>target)
            {
                bot=mid-1;
            }
            else
            {
                row=mid;
                break;
            }
        }
        int high=col,low=0;
        int coloumn;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(matrix[row][mid]<target)
            {
                low=mid+1;
            }
            else if(matrix[row][mid]>target)
            {
                high=mid-1;
            }
            else
            {
                return true;
            }
        }
        //cout<<row<<endl;
        //cout<<coloumn<<endl;
        return false;
    }
};
