#include <iostream>
using namespace std;

int countDigits(int n){
    int digit=0;
    while(n>0){
        digit++;
        n=n/10;

    }
    return digit;
}
int reverseNum(int n,int digit){
    int newNum=0;
    int pow=1;
    while(digit>1){
        pow=pow*10;
        digit--;
    }
    while(n>0){
        int rem=n%10;
        newNum= newNum + (rem*pow);
        n=n/10;
        pow=pow/10;
    }
    return newNum;
}

int main()
{
 int n;
 cout<<"enter a number :";
 cin>>n;
 int digit=countDigits(n);
 int reverseN= reverseNum(n,digit);
 cout<<reverseN;
 

}


// new pattern