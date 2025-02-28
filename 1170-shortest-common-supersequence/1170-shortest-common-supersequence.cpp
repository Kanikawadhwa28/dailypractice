class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int nw1 = str1.size();
        int nw2 = str2.size();

        // Build DP table for Longest Common Subsequence
        vector<vector<int>> dp(nw1 + 1, vector<int>(nw2 + 1, 0));

        for(int i = 1; i <= nw1; i++) {
            for(int j = 1; j <= nw2; j++) {
                if(str1[i-1] == str2[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        // Construct the shortest common supersequence
        string ans;
        int i = nw1, j = nw2;

        while(i > 0 && j > 0) {
            if(str1[i-1] == str2[j-1]) {
                // If characters match, add once and move diagonally
                ans += str1[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j] > dp[i][j-1]) {
                // Follow the larger value (up)
                ans += str1[i-1];
                i--;
            }
            else {
                // Follow the larger value (left)
                ans += str2[j-1];
                j--;
            }
        }

        // Add any remaining characters
        while(i > 0) ans += str1[--i];
        while(j > 0) ans += str2[--j];

        // Reverse since we built the string backwards
        reverse(ans.begin(), ans.end());
        return ans;
    }
};