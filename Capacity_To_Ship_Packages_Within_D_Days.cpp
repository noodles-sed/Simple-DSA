class Solution {
public:
  bool capicity(vector<int>& weights, int days,int cap)
  {
         int dayc=1;
         int curr=0;
         for(int w:weights)
         {
            if(w+curr>cap)
            {
                dayc++;
                curr=0;
            }
             curr+=w;
         }
         return dayc<=days;
  }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(capicity(weights,days,mid))
            {
                   ans=mid;
                   high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
