#include <iostream>
using namespace std;

int main()
{
    int num;
    int i;

    cout<<"Enter the number: ";
    cin>>num;
    
    for (i=2; i<num; i++){
      if (num%i==0){
        cout<<"Non prime"<<endl;
        break;
      }
    }
    
    if (i==num){
        cout<<"prime"<<endl;
      }

    return 0;
}