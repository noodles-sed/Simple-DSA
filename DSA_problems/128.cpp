#include<iostream>
#include<vector> 
#include<cmath>
#include<algorithm>
#include<climits>
using namespace std;
int longestConsecutive(vector<int> &nums){
    int n = nums.size();
    int result;
    sort(nums.begin(),nums.end());
    int lastsmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;
    int x = nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]-1==lastsmaller){
            cnt++;
            lastsmaller = nums[i];
        }
        else if(nums[i]!=lastsmaller){
            cnt = 1;
            lastsmaller = nums[i];
        }
        longest = max(longest,cnt);
    }
    result = longest;
    return result;
}
int main() 
{
  vector<int> nums = {100, 200, 1, 2, 3, 4};
  int n=nums.size();
  cout<<"Let's start learning coding and working this with and making it more fine"<<endl;
  int result = longestConsecutive(nums);
  cout<<"The result of the given array is "<<result<<endl;
  cout<<endl;
  
  return 0;
}