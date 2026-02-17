#include <iostream>
using namespace std;

int SumOfDigits (int n){
    int sum=0;
    int remainder;
    while (n>0){
        remainder = n%10;
        sum += remainder;
        n=n/10;

    }
    return sum;
}

int main()
{
 
 int n=1233;
 int sum=SumOfDigits(n);
 cout<<sum;
 return 0;

}


// new pattern