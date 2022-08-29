// problem link : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/


//find index that has condition arr[i] < arr[i-1]
//now we know that our array is rotated how many times
//just rotate that array known times 
// check array is sorted or not 


class Solution {
public:
    void reverse(vector<int> &arr, int l, int r){
        r -= 1;
        
        while(l <= r){
            swap(arr[l], arr[r]);
            
            l++;
            r--;
        }
    }
    
    
    
    bool check(vector<int>& arr) {
        int n = arr.size();
        if(n == 1 || n == 2){
            return true;
        }
        
        int c = 0;
        int index = -1;
        for(int i=1;i<n;i++){
            if(arr[i] < arr[i-1]){
                c++;
                index = i;
            }
        }
        
        if(c == 0){
            return true;
        }
        else if(c == 1){
                reverse(arr, index, n);
                reverse(arr, 0, index);
                reverse(arr, 0, n);
            
                for(int i=1;i<n;i++){
                    if(arr[i] < arr[i-1])return false;
                }
                return true;
        }
        else{
            return false;
        }
        
        
       
    
    }
};
