//https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1/

int largest(int arr[], int n) {
   
    int max = arr[0];
    
    for(int i=1;i<n;i++){
       max = (arr[i] > max)?arr[i]:max;
    }
    return max;
} 
