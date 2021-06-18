//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed

#include<iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    } 

    int ans = 2;
    int common_difference = a[1] - a[0];
    int current_length = 2;

    for(int j=2; j<n; j++){
        if( common_difference == (a[j] - a[j-1]) ){
            current_length++;
        }
        else{
            common_difference = a[j] - a[j-1];
            current_length = 2;
        }

        ans = max(ans, current_length);
    }

    cout<<ans<<endl;
    
    return 0;
}