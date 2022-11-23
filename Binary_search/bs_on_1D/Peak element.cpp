// problem link : https://practice.geeksforgeeks.org/problems/peak-element/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=peak-element

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n) // there will be always one peak element in every array (main observation)
    {// go where is greater element is  
       // Your code here
       int l = 0;
       int r = n - 1;
       while(l <= r){
           int mid = l + (r - l)/2;
           if((mid == 0 || arr[mid] > arr[mid-1]) && (mid == n - 1 || arr[mid] > arr[mid + 1])){
               return mid;
           }
           else if(arr[mid] <= arr[mid + 1]){
               l = mid + 1;
           }
           else{
               r = mid - 1;
           }
       }
       
       
       return -1;
    }
};
