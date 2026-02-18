#include <iostream>
using namespace std;



int main()
{
 
int pow=1,ans=0;
int decNum;
cout<<"enter number";
cin>>decNum;
while (decNum>0){
    int rem=decNum%2;
    decNum=decNum/2;
    ans = ans + (rem*pow);
    pow =pow*10;


}
cout<<"binary is "<<ans;
}


// new pattern