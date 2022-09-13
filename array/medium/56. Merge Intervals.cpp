// problem link : https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    #define pb push_back
    
    static bool cmp(vector<int> a, vector<int> b){
        if(a[0] < b[0])return true;
        else return false;
    }
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end(), cmp);
        // for(auto it : arr){
        //     cout<<it[0]<<" "<<it[1]<<endl;
        // }
        
        int start = arr[0][0];
        int end = arr[0][1];
        
        for(int i=1;i<n;i++){
            int first = arr[i][0];
            int second = arr[i][1];
            
            if(first > end){
                ans.pb({start, end});
                start = first;
                end = second;
                
            }
            else if(start<=first && first<=end){
                start = min(start, first);
                end = max(end, second);
            }
            
        }
        
        ans.pb({start, end});
        return ans;
        
        // return {{1,2}};        
    }
};
