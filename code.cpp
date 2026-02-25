#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

vector<int> pairSum(vector<int> &nums,int target)
{
    int st=0;
    int end=nums.size()-1;
    int ps;
    vector<int> ans;
    while(st<end)
    {
        ps=nums[st]+nums[end];
        if(ps < target)
        {
            st++;
        }
        else if(ps > target)
        {
            end--;
        }
        else{
            ans.push_back(st);
            ans.push_back(end);
            return ans;

        }

    }
    return ans;
}

int main(){
  vector<int>nums ={1,2,3,4,5};
  int target =7;
  vector<int> ans=pairSum(nums,target);

  cout<<ans[0]<<", "<<ans[1]<<endl;

    return 0;
}