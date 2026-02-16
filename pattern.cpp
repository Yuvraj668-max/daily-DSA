#include <iostream>
using namespace std;
int main(){
  
int n=4;



for(int i=0;i<n;i++)
{

    
    for(int j=i+1;j>0;j--)
    {
        cout<<" ";
        
        
    }
    for (int k=n;k>i;k--){
        cout<<i+1;
    }
    cout<<endl;
    
}
    return 0;
}