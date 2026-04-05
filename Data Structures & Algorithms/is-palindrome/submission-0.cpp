class Solution {
public:
    bool isPalindrome(string s) {
        string ss;
        for(auto c:s)
        {
            if((c>='a'&& c<='z')||(c>='0' && c<='9')||(c>='A' && c<='Z'))
            {
                char x=tolower(c);
                ss+=x;
            }
        }
        //cout<<ss;
        int i=0;
        int j=ss.length()-1;
        while(i<j)
        {
            if(ss[i]==ss[j])
            {
                i++;
                j--;
            }
            else
            return false;
        }
        return true;
    }
};
