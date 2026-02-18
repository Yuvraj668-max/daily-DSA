#include <iostream>
using namespace std;



int main()
{
 
int binary;
int pow=1,ans=0;
cout<<"enter binary numaber"<<endl;
cin>>binary;
while(binary>0){
    int rem=binary%10;
    ans = ans+ (rem*pow);
    binary=binary/10;
    pow=pow*2;

    
}

cout<<"decimal num is "<<ans;
}


// new pattern