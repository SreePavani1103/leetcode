class Solution {
public:
   void merge(int l,int m,int h,vector<int>&a)
   {
        vector<int>res(h-l+1);
        int k=0;
         int i=l;
         int j=m+1;
         while(i<=m && j<=h)
         {
            if(a[i]<a[j])
            {
                res[k++]=a[i++];
            }
            else
            res[k++]=a[j++];
         }
         while(i<=m)
         {
            res[k++]=a[i++];
         }
         while(j<=h)
         {
            res[k++]=a[j++];
         }
          k=0;
         for(int  i=l;i<=h;i++)
         {
            a[i]=res[k++];
         }
   }
   void merge_sort(int l,int h,vector<int>&a)
   {
     if(l<h)
     {
        int m=(l+h)/2;
        merge_sort(l,m,a);
        merge_sort(m+1,h,a);
        merge(l,m,h,a);
     }
   }
   void sortColors(vector<int>& nums) {
        int n=nums.size();
        merge_sort(0,n-1,nums);
       
    }
};