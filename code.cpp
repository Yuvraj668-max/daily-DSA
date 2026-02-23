#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> vec)
{
    int start=0;
    int end=vec.size()-1;
    while(start<end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
   for(int value:vec)
   {
    cout<<value<<" ";
   }
}

int main()
{
    vector<int> vec={1,2,3,4,5,6};
    reverseVector(vec);

}
// new
//  pattern