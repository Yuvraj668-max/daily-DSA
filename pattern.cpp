#include <iostream>
using namespace std;
int main(){
    int n=4;
    int count =1;
for(int i=0;i<n;i++)
{
    char ch ='A';
    for(int j=0;j<n;j++)
    {
        cout<<count<<" ";
        count=count+1;
    }
    cout<<endl;
}
    return 0;
}