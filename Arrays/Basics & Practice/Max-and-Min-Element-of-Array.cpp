#include<iostream>
#include<climits>
using namespace std;
 
int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max_number = INT_MIN;
    int min_number = INT_MAX;
    
    for(int i=0; i<n; i++){
        max_number = max(max_number, arr[i]);
        min_number = min(min_number, arr[i]);
    }

    cout<<endl;
    cout<<"The Max Number is: "<<max_number<<endl;
    cout<<"The Min Number is: "<<min_number<<endl;
    
    return 0;
}
