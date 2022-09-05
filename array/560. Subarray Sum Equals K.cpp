class Solution {
public:
    
//      4       9 
//     --> ---------->
//     -------------->
//         13
         
         
     // where 9 is our k   
     // very imp question if we dont find solution with sliding window
     // memorize this concept
    
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        map<int, int> m;
        int sum = 0;
        int ans = 0;
        m[sum] = 1;
        for(auto it : arr){
            sum += it;
            
            int find = sum - k;
            if(m.find(find) != m.end()){
                ans += m[find];
            }
            m[sum] += 1;
        }
        
        return ans;
       
        
    }
};
