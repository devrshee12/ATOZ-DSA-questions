// problem link : https://leetcode.com/problems/3sum/submissions/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        
        for(int i=0;i<n-2;i++){
            
            if(i == 0 || (i > 0 && arr[i] != arr[i-1])){ // if we have added all triplets for -1 next element is also -1 then we will skip that element because we dont want duplicate triplates 
                
                int lo = i + 1;
                int hi = n-1;
                int need = 0 - arr[i];
                while(lo < hi){ // traditional 2 pointer if we have sorted array 
                    if(arr[lo] + arr[hi] == need){
                        vector<int> temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[lo]);
                        temp.push_back(arr[hi]);
                        res.push_back(temp);
                        
                        
                        // to avoid duplicate triplates
                        while(lo < hi && arr[lo] == arr[lo + 1])lo++;
                        while(lo < hi && arr[hi] == arr[hi - 1])hi--;
                        
                        
                        lo++;
                        hi--;
                        
                        
                    }
                    else if(arr[lo] + arr[hi] < need){
                        lo++;
                    }
                    else{
                        hi--;
                    }
                }
            }
        }
        
        
        return res;
        
    }
};
