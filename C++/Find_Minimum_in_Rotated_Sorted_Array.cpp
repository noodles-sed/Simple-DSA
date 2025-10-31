class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        while(low<=high)
        {  
            int mid=(low+high)/2;
            if(nums[low]<=nums[high])
            {
                 ans=min(nums[low],ans);
                 break;
            }
            if(nums[low]<=nums[mid])
            {
                ans=min(nums[low],ans);
                low=mid+1;
            }
            else
            {
                  high=mid-1;
                  ans=(ans,nums[mid]);
            }
        }
        return ans;
    }
};
