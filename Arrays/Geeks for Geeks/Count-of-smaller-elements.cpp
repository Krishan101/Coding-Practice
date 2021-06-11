//https://practice.geeksforgeeks.org/problems/count-of-smaller-elements5947/1/

int countOfElements(int arr[], int n, int x) {
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<=x)
            count++;
    }
    return count;
}
