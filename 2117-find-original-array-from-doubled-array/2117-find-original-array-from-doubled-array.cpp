class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>v;
        int n=changed.size();
        if(n%2!=0)
        return {};
    map<int,int>m;
    sort(changed.begin(),changed.end());
    for(int i=0;i<n;i++)
    {
        m[changed[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[changed[i]]==0)
        continue;
        if(m[2*changed[i]]==0)
        return {};
        v.push_back(changed[i]);
        m[changed[i]]--;
        m[2*changed[i]]--;
    }
    return v;
    }
};