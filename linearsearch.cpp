#include <iostream>
using namespace std;
int linearsearch (int arr[],int size , int target)
{
    for (int i=0;i<size;i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
 int main(){
    int size;
    cout<<"enter size of array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the "<<i<<"element "<<endl;
        cin>>arr[i];

    }
    int target;
    cout<<"enter target  "<<endl;
    cin>>target;
    int index=linearsearch(arr,size,target);
    if (index>=0)
    {
        cout<<"target found at index "<<index<<endl;
    }
    else 
    {
        cout <<"not found";
    }

 }