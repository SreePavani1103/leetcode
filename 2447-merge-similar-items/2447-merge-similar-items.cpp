class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>s;
        int k=0;
        for(int i=0;i<items1.size();i++)
        {
            bool f=false;
            for(int j=0;j<items2.size();j++){
                if(items1[i][0]==items2[j][0])
                {
                    s.push_back({items1[i][0],items1[i][1]+items2[j][1]});
                   f=true;
                 break;
                }
            }
             if(!f)
              {
                s.push_back({items1[i][0],items1[i][1]});
              
              }
        }
                // add items only in items2
        for (int j = 0; j < items2.size(); j++) {
            bool f = false;
            for (int i = 0; i < items1.size(); i++) {
                if (items2[j][0] == items1[i][0]) {
                    f = true;
                    break;
                }
            }
            if (!f) {
                s.push_back({items2[j][0], items2[j][1]});
            }
        }

       sort(s.begin(),s.end());
        return s;
    }
};