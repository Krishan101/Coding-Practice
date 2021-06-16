#include<iostream>
using namespace std;
 
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key)
            cout<<"The element "<<key<<" is found at position "<<i;
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

    linearSearch(arr, n, key);

    return 0;
}
