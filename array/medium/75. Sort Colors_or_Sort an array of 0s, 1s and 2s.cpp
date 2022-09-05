class Solution {
public:
    // problem link : https://leetcode.com/problems/sort-colors/
  
  
    //dutch national flag algorithm
    // this algorithm insure that 0 to low - 1 will be 0 and high + 1 to n - 1 will be 2
    
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;
        
        while(mid <= high){
            
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                low++; // why we are increasing low because dutch algo insure that 0 to low - 1 will be 0
                // and after high there will be only 2's
                // we can have 1 before low that why we are increasing low
                
                mid++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                swap(arr[mid], arr[high]);
                // why we are not increasing mid? 
                // because after this index we could have 0 or 1 
                high--;
            }
        }
        
        
    }
};
