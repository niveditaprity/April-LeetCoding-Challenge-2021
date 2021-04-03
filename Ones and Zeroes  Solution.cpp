class Solution {
public:
      int calcOnes(string s){
        int ones = 0;
        for(int i = 0, n = s.length();i < n; ++i){
            if(s[i] == '1'){
                ones++;
            }
        }
        return ones;
    }
    int calcZeros(string s) {
        int zeros = 0;
        for(int i = 0, n = s.length(); i < n; ++i){
            if(s[i] == '0'){
                zeros++;
            }
        }
        return zeros;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int p = strs.size();
        int dp[p+1][m+1][n+1]; 
        memset(dp, 0, sizeof(dp));
        
        for(int i = 0; i <= m; ++i){
            for(int j = 0; j <= n; ++j){
                for(int k = 1; k <= p; ++k){
                    int ones = calcOnes(strs[k-1]);
                    int zeros = calcZeros(strs[k-1]);
                    if(ones <= j && zeros <= i){
                        dp[k][i][j] = max(dp[k-1][i][j], dp[k-1][i-zeros][j-ones] + 1); 
                    } else {
                        dp[k][i][j] = dp[k-1][i][j];
                    }
                }
            }
        }
        return dp[p][m][n];  
    }
};
