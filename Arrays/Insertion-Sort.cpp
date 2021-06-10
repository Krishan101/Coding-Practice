#include<iostream>
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

    //Sorting is done here
    for (int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    //Now we'll print the array
    for(int i=0; i<n; i++){   
        cout<<arr[i]<<" ";
    }
             
}
