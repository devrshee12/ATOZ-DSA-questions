// problem link : https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=first-and-last-occurrences-of-x


#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends

int firstoccur(int arr[],int n,int x)
{
    int start = 0;
    int end = n-1;
    int res = -1;
    while(start<=end)
    {
        int mid = start + (end-start/2);
        if(x == arr[mid])
        {
            res = mid;
            end = mid -1 ;
        }
        else if(arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid -1 ;
        }
        
    }
    
    return res;
}


int lastoccur(int arr[],int n,int x)
{
    int start = 0;
    int end = n-1;
    int res = -1;
    while(start<=end)
    {
        int mid = start + (end-start/2);
        if(x == arr[mid])
        {
            res = mid;
            start = mid + 1;
        }
        else if(arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid -1 ;
        }
        
    }
    
    return res;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    int temp1 = firstoccur(arr,n,x);
    int temp2 = lastoccur(arr,n,x);
    ans.push_back(temp1);
    ans.push_back(temp2);
    
    return ans;
    
}
