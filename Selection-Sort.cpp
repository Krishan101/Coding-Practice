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
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                int temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
            }
        }
    }

    //Now we'll print the array
    for(int i=0; i<n; i++){   
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
