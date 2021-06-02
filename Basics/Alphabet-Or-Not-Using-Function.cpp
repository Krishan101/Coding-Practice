#include<iostream>
using namespace std;

char alphabet_or_not(char ch){
    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        cout<<"Entered character is an alphabet!";
    }
    else{
        cout<<"Entered character is not an alphabet!";
    }
    return ch;
}

int main()
{   char ch;
    cout<<"Enter the character to check whether it's alphabet or not: ";
    cin>>ch;
    
    alphabet_or_not(ch);

    return 0;
}