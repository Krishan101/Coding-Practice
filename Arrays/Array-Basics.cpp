#include<iostream>
using namespace std;
 
int main()
{   int n;
    cout<<"Enter the size of arrary: ";
    cin>>n; 

    int arr[n];

    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"The elements of array are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"The "<<n<<"th element of array is: "<<arr[n-1]<<endl;

    int arrSize = sizeof(arr)/sizeof(arr[0]); //It is used to find the size of array
    cout<<"The size of the array is: "<<arrSize<<endl;

    return 0;
}
