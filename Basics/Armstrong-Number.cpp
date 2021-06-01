// 153 ---> (1)^3 + (5)^3 + (3)^3 = 153 This is Armstrong Number
#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{   int n;
    cout<<"Enter the number: ";
    cin>>n;

    int original_number = n;
    int sum = 0;

    while(n>0){
        int lastdigit = n%10;
        sum += round(pow(lastdigit,3));
        n = n/10;
    }

    if(sum==original_number){
        cout<<"It is an Armstrong Number!";
    }
    else{
        cout<<"It is not an Armstrong Number!";
    }

    return 0;
}