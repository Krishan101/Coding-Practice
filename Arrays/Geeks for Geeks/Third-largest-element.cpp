//https://practice.geeksforgeeks.org/problems/third-largest-element/1/

class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        if(n<3)
            return -1;
        
        sort(a,a+n);
        
        return a[n-3];
    }


};
