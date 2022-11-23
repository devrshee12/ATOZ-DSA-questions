// problem link : https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution{
    public:
    double MedianOfArrays(vector<int>& arr1, vector<int>& arr2)
    {
        // Your code goes here
        if(arr2.size() < arr1.size())return MedianOfArrays(arr2, arr1);
        int n1 = arr1.size();
        int n2 = arr2.size();
        
        int low = 0;
        int high = n1;
        
        while(low <= high){
            int cut1 = (low + high) >> 1;
            int cut2 = (n1 + n2 + 1)/2 - cut1;
            
            int left1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
            int left2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];
            
            int right1 = cut1 == n1 ? INT_MAX : arr1[cut1];
            int right2 = cut2 == n2 ? INT_MAX : arr2[cut2];
            
            if(left1 <= right2 && left2 <= right1){
                if((n1 + n2) % 2 == 0){
                    return (max(left1, left2) + min(right1, right2))/2.0;
                    
                    
                }
                else{
                    return max(left1, left2);
                }
            }
            else if(left1 > right2){
                high = cut1 - 1;
                
            }
            else{
                low = cut1 + 1;
            }
        } 
        
        
        return 0.0;
    
    }
};
