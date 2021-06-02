#include<iostream>
using namespace std;
 
int factorial(int num){
    int factorial = 1;
    
     while(num>0){
        factorial *= num;
        num--; 
    }
    
    return factorial;
}

int main()
{   int n,r;
    cout<<"Enter the value of 'n' & 'r' to find the value of nCr: ";
    cin>>n>>r;

    int nCr = factorial(n)/(factorial(n-r) * factorial(r));
    cout<<"The value of nCr is: "<<nCr;

    return 0;
}