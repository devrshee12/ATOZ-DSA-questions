// problem link : https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-element-in-a-sorted-and-rotated-array


class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int l = 0;
        int r = n - 1;
        if(arr[l] <= arr[r]){ // check whether array is already sorted or not if it is our answer is arr[0]
            return arr[l];
        }
        while(l <= r){
            int mid = l + (r - l)/2;
            if(mid + 1 < n && arr[mid] > arr[mid + 1]){
                return arr[mid + 1];
            }
            else if(mid - 1 >= 0 && arr[mid] < arr[mid - 1]){
                return arr[mid];
            }
            
            if(arr[l] <= arr[mid]){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        
        
        return -1;
    }
};
