// problem link : https://practice.geeksforgeeks.org/problems/subsets-with-xor-value2023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=subsets-with-xor-value
class Solution{
public:
    
    int dp[20][1000];
    int f(int ind, int value, vector<int> &arr, int n, int k){
        if(ind == n){
            if(value == k)return 1;
            else return 0;
        }
        
        if(dp[ind][value] != -1)return dp[ind][value];
        
        
        int op1 = f(ind+1, value^arr[ind], arr, n, k);
        int op2 = f(ind+1, value, arr, n, k);
        
        return dp[ind][value] = op1 + op2;
        
    }

    int subsetXOR(vector<int> arr, int n, int k) {
        memset(dp, -1, sizeof dp);
        
        return f(0, 0, arr, n, k);
        
        
    }
};
