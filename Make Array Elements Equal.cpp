''' You are given an integer N. Consider an array arr having N elements where arr[i] = 2*i+1. (The array is 0-indexed)
You are allowed to perform the given operation on the array any number of times:
1) Select two indices i and j and increase arr[i] by 1 and decrease arr[j] by 1
Your task is to find the minimum number of such operations required to make all the elements of the array equal.'''

Solution:-

class Solution {
  public:
    long long int minOperations(int N) {
        long long divide = N/2;
        long long rem = N-divide;
        return divide * rem;    }
};
