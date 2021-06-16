#include<iostream>
using namespace std;
 
int binarySearch(int arr[], int n, int key){
    int starting_point = 0;
    int ending_point = n;

    while(starting_point<=ending_point){
        int mid_value = (starting_point+ending_point)/2;

        if(arr[mid_value]==key){
            return mid_value;
        }

        else if(arr[mid_value]>key){
            ending_point = mid_value - 1;
        }

        else{
            starting_point = mid_value + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;

    cout<<binarySearch(arr, n, key);
    
    return 0;
}
