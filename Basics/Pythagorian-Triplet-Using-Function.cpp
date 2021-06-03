#include<iostream>
#include<math.h>
using namespace std;

int max(int num1, int num2){
    int max = (num1>num2)?num1:num2;

    return max;
}

bool check(int a, int b, int c){
    int x = max(a, max(b,c));
    int y,z;

    if (x == a){
        y = b;
        z = c;
    }
    else if (x == b){
        y = a;
        z = c;
    }
    else{
        y = b;
        z = a;
    }

    return (pow(x,2) == pow(y,2) + pow(z,2))?true:false; 
}

int main()
{   int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    if(check(a,b,c)){
        cout<<"Its a Pythagorian Triplet!";
    }
    else{
        cout<<"Its not a Pythagorian Triplet!"; 
    }

    return 0;
}