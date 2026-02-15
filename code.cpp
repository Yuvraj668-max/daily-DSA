#include <iostream>
using namespace std;

int main()
{
 bool isPrime = true;
 int n;
 cout<<"enter n"<<endl;
 cin>>n;
 for (int i=2;i<n;i++)
 {
    if(n%i==0){
        isPrime = false;
    }
 }
 if(isPrime)
 {
    cout<<"is prime";
 }
 else{
    cout<<"not prime";
 }
 return 0;

}


// first program 