class Solution {
public:
    int calPoints(vector<string>& operations) {
        long long int sum=0;
        stack<int>st;
        for(auto i:operations)
        {
            
            if(i=="C") st.pop();
            else if(i=="+")
            {
                int x=st.top();
                st.pop();
                int y=x+st.top();
                st.push(x);
                st.push(y);
            }
            else if(i=="D")
            {
                st.push(2*st.top());
            }
            else{
                st.push(stoi(i));
            }  
        }
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};