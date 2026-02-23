#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec,int target)
{
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==target)
        {
            return i;
        }

    }
    return -1;
}
int main()
{
    vector<int> vec = {1,2,3,4,5,6};
    int target = 5;
    int index=linearSearch(vec,target);
    cout<<index;
    return 0;
}
// new
//  pattern