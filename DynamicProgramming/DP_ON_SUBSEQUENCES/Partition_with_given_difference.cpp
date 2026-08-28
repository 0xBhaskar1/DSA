/*
    Problem Link : https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1
*/

//code :
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i < n; i++) sum+=arr[i];
        
        int target = (sum - diff) / 2;
        
        // if sum - diff is odd or diff > sum partition not possible
        if((diff > sum) || (sum - diff)%2 == 1) return 0;
        
        vector<vector<int>> dp(n, vector<int>(sum+1, 0));
        
        
        
        dp[0][0] = 1;
        // case when target is 0 and arr[0] is 0
        dp[0][arr[0]]+=1;
        
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < sum+1; j++) {
                int notTake = dp[i-1][j];
                int take = 0;
                if(arr[i]<=j) {
                    take = dp[i-1][j - arr[i]];
                }
                dp[i][j] = take + notTake;
            }
        }
        
        int count = dp[n-1][target];
        
        return count;
    }
};