// simple logic 

//      ----------->
//           0
// ---->
//   x
// ---------------->
//                 x


class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        int sum = 0;
        map<int, int> m;
        int ans = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            
            if(sum == 0){
                ans =  max(ans, i + 1);
                m[sum] = i;
            }
            else{
                if(m.find(sum) != m.end()){
                    ans = max(ans, i - m[sum]);
                }
                else{
                    m[sum] = i;
                }
            }
        }
        
        
        return ans;
    } 
};
