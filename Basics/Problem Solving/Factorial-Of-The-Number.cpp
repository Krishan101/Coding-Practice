#include<iostream>
using namespace std;
 
int main()
{   int num;
    cout<<"Enter the no.: ";
    cin>>num;

    int original_number = num;
    int factorial = 1;
    while(num>0){
        factorial *= num;
        num--; 
    }

    cout<<"Factorial of the given number "<<original_number<<" is "<<factorial;
    return 0;
}