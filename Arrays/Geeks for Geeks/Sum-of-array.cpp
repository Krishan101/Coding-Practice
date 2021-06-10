//https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/0/

class Solution{
    public:
    int getSum(int a[], int n) {
        int result = 0;
        for(int i=0; i<n; i++){
            result = result + a[i];
        }
        return result;
    }   
};
