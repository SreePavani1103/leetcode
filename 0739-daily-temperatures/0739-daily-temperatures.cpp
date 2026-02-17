class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int>a;
        vector<int>b(n,0);
        for(int i=0;i<n;i++)
        {
            while(!a.empty() && temperatures[i] > temperatures[a.top()])
            {
                int k=a.top();
                a.pop();
               b[k]=i-k;
            }
            a.push(i);
        }
      return b;
    }
};