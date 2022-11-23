// problem link : https://practice.geeksforgeeks.org/problems/search-in-rotated-array-2/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-rotated-array



class Solution {
  public:
    bool Search(int n, vector<int>& arr, int key) {
        // Code here
        int l = 0;
        int r = n - 1;
        
        while(l <= r){
            int mid = l + (r - l)/2;
            if(arr[mid] == key)return true;
            
            if((arr[l] == arr[mid]) && (arr[mid] == arr[r])){
                l++;
                r--;
            }
            else if(arr[l] <= arr[mid]){
                if(arr[l] <= key && key <= arr[mid]){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            else{
                if(arr[mid] <= key && key <= arr[r]){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }
        
        
        return false;
    }
};
