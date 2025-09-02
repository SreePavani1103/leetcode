class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>s;
        for(int i=0;i<nums1.size();i++)
        {
            bool f=false;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i][0]==nums2[j][0])
                {
                    s.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                   f=true;
                 break;
                }
            }
              if(!f)
              {
                s.push_back({nums1[i][0],nums1[i][1]});
              }
        }
        for(int i=0;i<nums2.size();i++)
        {
            bool f=false;
            for(int j=0;j<nums1.size();j++){
                if(nums2[i][0]==nums1[j][0])
                {
                   f=true;
                 break;
                }
            }
              if(!f)
              {
                s.push_back({nums2[i][0],nums2[i][1]});
              }
            }
        sort(s.begin(),s.end());
        return s;
    }
};