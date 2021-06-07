//https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/

int transitionPoint(int arr[], int n) {
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        int mid = (start+end)/2;
        
        if (arr[mid] == 0){
            start = mid+1;
        }
        
        else if(arr[mid] == 1){
            if(mid == 0 ||  (mid > 0 && arr[mid - 1] == 0))
                return mid;
            
            else
                end = mid-1;
        }
        
    }
    return -1;
}
