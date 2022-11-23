// problem link : https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%3BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array


class Solution{
  public:
    #define ll long long
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long x){
        
        // Your code here
        
        int i = 0;
        int j = n - 1;
        while(i <= j){
            int mid =  i + (j - i)/2;
            if(arr[mid] == x){
                return mid;
            }
            else if(arr[mid] > x){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        
        
        if(j < n && j >= 0){
            return j;
        }
        else{
            return -1;
        }
        
        
        
        
        
    }
};
