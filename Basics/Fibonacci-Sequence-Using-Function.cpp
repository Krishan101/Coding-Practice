#include<iostream>
using namespace std;


void fibonacci_sequence(int num){
    int num1=0;
    int num2=1;
    int nextTerm;

    for (int i=1; i<=num; i++){
        cout<<num1<<endl;
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }
    return;
}

int main()
{   int num; //Number for the Fibonacci Sequence
    cout<<"Enter the number for the Fibonacci Sequence: ";
    cin>>num;

    fibonacci_sequence(num);

    return 0;
}   