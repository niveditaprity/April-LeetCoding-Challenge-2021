class Solution {
public:
    int minOperations(int n) {
        if(n&1)
        {
            int N=(n-1)/2;
            return N*(N+1);
        }
        else
        {
            n=n/2;
            return n*n;
        }
        
    }
};
