class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>res;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int x=0;
        //sort(mp.begin(),mp.end());
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        for(int i=0;i<k;i++)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
