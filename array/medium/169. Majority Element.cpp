// problem link : https://leetcode.com/problems/majority-element/



class Solution {
public:
    // Moore’s Voting Algorithm
    
    // we know that we will be having majority element in our array 
    // so count of majority element - other elements will always be positive
    // because question states that majority element means which element occurs more than n/2 
    // that's why we use moore's voting algorithm 
    // in this algorithm just take two variables as count and element 
    // if count == 0 than change the element as arr[i]
    // if element == arr[i] increase count 
    // else decrease count
    // finally we will be having element as our majority element
    
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int element = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(count == 0){
                element = arr[i];
            }    
            if(arr[i] == element)count++;
            else count--;
        }
        
        
        return element;
        
    }
};
