//https://practice.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1/

void print(int ar[], int n)
{   for(int i=0; i<n; i++){
        if(i%2==0)
        cout<<ar[i]<<" ";
    }
}
