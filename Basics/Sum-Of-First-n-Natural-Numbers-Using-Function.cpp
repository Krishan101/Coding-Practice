#include<iostream>
using namespace std;
 
int sum(int num){
    int sum = ((num)*(num+1))/2;
    cout<<sum;
    return sum;
}

int main()
{   int n;
    cout<<"Enter the number till you want the sum: ";
    cin>>n;

    sum(n);

    return 0;
}