//for left shift
// reverse 0 to k-1
// reverse k to n-1
// reverse whole array

// problem link : https://leetcode.com/problems/rotate-array/


class Solution {
public:
    void reverse(vector<int> &arr, int i, int j){
         j -= 1;
        
        while(i <= j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k %= n;
        if(n == 1 || k == 0){
            return;
        }
        else{
            reverse(arr, 0, n-k);
            // for(auto it : arr)cout<<it<<" ";
            // cout<<endl;
            reverse(arr, n-k, n);
            // for(auto it : arr)cout<<it<<" ";
            // cout<<endl;
            reverse(arr, 0, n);
        }
        
        
    }
};
