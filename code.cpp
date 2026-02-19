#include <iostream>
using namespace std;

bool isPowerOfTwo(int n,int current=1)
{
    
    if(current==n){
        return true;
    }
    if(current>n){
        return false;
    }

    return isPowerOfTwo(n,current<<1);
}
int main()
{
 int n;
 cout<<"enter a number :";
 cin>>n;
 if(isPowerOfTwo(n)){
    cout<<"number is a power of 2";
 }
 else{
    cout<<"number is not a power of 2";
 }
}


// new pattern