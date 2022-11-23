// problem link : https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-the-element-that-appears-once-in-sorted-array



class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        int l = 0;
        int r = n - 1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(mid + 1 < n && arr[mid] == arr[mid + 1]){
                if((mid + 1)%2 != 0){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
            else if(mid - 1 >= 0 && arr[mid] == arr[mid - 1]){
                if((mid - 1)%2 == 0){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
            else{
                return arr[mid];
            }
        }
    }
};
