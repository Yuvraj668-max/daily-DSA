#include <iostream>
using namespace std;
int main(){
   char ch='A';
int n=4;
for(int i=0;i<n;i++)
{
    
    for(int j=0;j<i+1;j++)
    {
        cout<<ch<<" ";
        
    }
    cout<<endl;
    ch=ch+1;
}
    return 0;
}