#include <iostream>
// #include <vector>
#include <climits> 
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int maxSum=INT_MIN;
    for (int st=0;st<n;st++)
    {
        int currSum=0;
        for (int end=st;end<n;end++)
        {
            currSum=currSum+arr[end];
             maxSum=max(currSum, maxSum);
           
        }
     
    }
    cout<<"max sub array sum "<<maxSum;
    return 0;
}