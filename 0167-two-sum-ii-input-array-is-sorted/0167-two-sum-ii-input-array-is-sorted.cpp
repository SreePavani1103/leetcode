class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<pair<int,int>>a;
       int n= numbers.size();
        for(int i=0;i<n;i++)
        {
            a.push_back({numbers[i],i});
        }
        vector<int>v(2,-1);
        int l=0;
        int r=n-1;
        while(l<r)
        {
            int sum=a[l].first+a[r].first;
            if(sum==target)
            {
                v[0]=a[l].second+1;
                v[1]=a[r].second+1;
                break;
            }
            else if(sum<target)
            l++;
            else
            r--;
        }
return v;
    }
};