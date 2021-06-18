//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171

#include<iostream>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;

    int a[n+1];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    a[n] = -1;
    
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }

    int ans = 0;
    int max_num = -1;

    for(int i=0; i<n; i++){
        if(a[i]>max_num && a[i]>a[i+1]){
            ans++;
            max_num = max(max_num, a[i]);
        }
    }

    cout<<ans<<endl;
    return 0;
}
