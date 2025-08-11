class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
     multimap<int ,int,greater<int>>m2;
     for(auto &p:m)
     {
        m2.insert({p.second ,p.first});
     }
     vector<int>v;
     for(auto &p:m2)
     {
        v.push_back(p.second);
     }
    vector<int>l;
    for(int i=0;i<k;i++)
    {
        l.push_back(v[i]);
    }
    return l;
    }
};