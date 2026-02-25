#include <iostream>
#include<vector>

using namespace std;
int majorityElement(vector<int> &nums)
{
    int n= nums.size()-1;
    for(int val:nums)
    {
        int freq=0;
        for(int vlu:nums)
        {
            if(val==vlu)
            {
                freq++;

            }
        }
        if(freq>n/2)
        {
            return val;
        }
    }
}
int main()
{
    vector<int> nums={1,2,2,1,1};
    int ans=majorityElement(nums);
    cout<<ans;

    return 0;
}