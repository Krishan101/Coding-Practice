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
{   int n;
    cout<<"Enter the num till you want to see the pattern: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<factorial(i)/(factorial(i-j) * factorial(j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}