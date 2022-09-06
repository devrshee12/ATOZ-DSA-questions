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
//think in reverse direction


// extended Moore’s Voting Algorithm

// this intution comes from n/2 or n/3
// which is if we need to find element which is occuring more than n/k time 
// that means we could have maximum k - 1 candidates for that 
// for example 
// n = 12 k = 4 
// n/k = 3 
// 4 4 4 0






class eleCount{
    public:
        int element;
        int count;
};




void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(k < 2){
        return;
    }

    eleCount temp[k-1];

    for(int i=0;i<k-1;i++){
        temp[i].count = 0;
    }


    for(int i=0;i<n;i++){
        int j =0 ;
        for(j =0;j<k-1;j++){
            if(temp[j].element == arr[i]){
                temp[j].count += 1;
                break;
            }
        }

        if(j == k - 1){
            int l;
            for(l=0;l<k-1;l++){
                if(temp[l].count == 0){
                    temp[l].element = arr[i];
                    temp[l].count = 1;
                    break;
                }
            }


            if(l == k - 1){
                for(l == 0;l< k - 1;l++){
                    temp[l].count -= 1;
                }
            }
        }
    }


    for(int i=0;i<k;i++){
        int actual = 0;
        for(int j=0;j<n;j++){
            if(arr[j] == temp[i].element){
                actual++;
            }
        }

        if(actual > n/k){
            cout<<temp[i].element<<" ";
        }
    }
    cout<<endl;


    

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
