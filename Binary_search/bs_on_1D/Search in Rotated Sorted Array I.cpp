// problem link : https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-a-rotated-array

class Solution{
    
    public:
    int search(int arr[], int l, int r, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        
        while(l <= r){
            int mid = l + (r - l)/2;
            if(arr[mid] == key)return mid;
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
        
        
        
        return -1;
        
    }
};
