class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);
        for(auto it:s)
        {
            arr1[it-'a']++;
        }
        for(auto it:t)
        {
            arr2[it-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i]) return false;
        }
        return true;
    }
};
