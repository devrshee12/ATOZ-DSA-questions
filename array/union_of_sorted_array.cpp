#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vint vector<int>
#define vi vector<ll>
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vi,greater<ll>>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define endl "\n"
#define ff first
#define ss second
#define printv(f) for(auto it : f){cout<<it<<" ";}cout<<endl;
#define printm(m)for(auto it : m){cout<<it.ff<<" "<<it.ss<<endl;}cout<<endl;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(arr) arr.begin(), arr.end()
#define log(args...)    { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cout << *it << " = " << a << endl;
    err(++it, args...);
}

//think of small cases
//make observations


//union of two sorted array 



void solve(){
    int n,m;
    cin>>n>>m;
    vint a(n);
    vint b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    
    int i = 0;
    int j = 0;
    vint ans;
    while(i < n && j < m){
        if(a[i] < b[j]){
            ans.pb(a[i]);
            int ele = a[i];
            while(a[i] == ele){
                i++;
            }
        }
        else if(a[i] == b[j]){
            ans.pb(a[i]);
            int ele = a[i];
            while(a[i] == ele){
                i++;
            }
            while(b[j] == ele){
                j++;
            }

        }
        else{
            ans.pb(b[j]);
            int ele = b[j];
            while(b[j] == ele){
                j++;
            }
        }

    }

    while(i < n){
        ans.pb(a[i]);
        int ele = a[i];
        while(a[i] == ele){
            i++;
        }
    }        
    

    while(j < m){
        ans.pb(b[j]);
        int ele = b[j];
        while(b[j] == ele){
            j++;
        }

    }    


    printv(ans);

    

}




int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin>>t;
   
     
    while(t--){
        solve();
    }
    // solve();
} 
