//https://practice.geeksforgeeks.org/problems/sum-of-series2811/1/

class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	    long input = n;
	    long sum = ((input)*(input+1))/2;
	    return sum;
	}
};
