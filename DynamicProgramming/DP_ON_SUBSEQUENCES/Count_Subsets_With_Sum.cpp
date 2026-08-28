/*
    problem link : https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(target+1, 0));
        dp[0][0] = 1;
        // case when target is 0 and arr[0] = 0
        if(arr[0] <= target) dp[0][arr[0]] += 1;
        
        
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < target+1; j++) {
                int notTake = dp[i-1][j];
                int take = 0;
                if(arr[i] <= j) {
                    take = dp[i-1][j-arr[i]];
                }
                dp[i][j] = (take + notTake);
            }
        }
        
        return dp[n-1][target];
    }
};