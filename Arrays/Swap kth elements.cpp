//https://practice.geeksforgeeks.org/problems/swap-kth-elements5500/0/

class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	    k = k-1;
	    swap(arr[k],arr[n-k-1]);
	    
	}
};
