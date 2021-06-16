#include<iostream>
#include<climits>
using namespace std;
 
int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    int max_number = INT_MIN;

    for(int i=0; i<n; i++){
        max_number = max(max_number,arr[i]);
        cout<< max_number << " ";
    }

    return 0;
}
