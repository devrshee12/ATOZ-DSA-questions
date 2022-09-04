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




// problem link : https://takeuforward.org/data-structure/find-the-repeating-and-missing-numbers/

// first take xor of all the elements with 1 to n 
// after taking xor we get x ^ y == xor1
// where x could be missing number or repeating number or y could be repeating number or missing number
// find right most bit of xor1
// why we are finding right most bit of xor1  ? 
// because we know that if xor of two number gives 1 at ith bit so it is possible that 
// ith bit of first and second number will be different
// it can be 0 or 1  OR  1 or 0
// so now we divide our input into two buckets 
// if arr[i] has ith bit on we will put that number into first bucket and if not we will put that into second bucket
// after that above same proccess will be done on 1 to n numbers also 
// after doing above proccess we will be having x as missing number or repeating number and same to y
// to find that we just check the count of x 
// if that count is zero than we can say that x is missing number and y is repeating number 
// else y is missing number and x is repeating number 







void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // printv(arr);

    int xor1 = arr[0];
    for(int i=1;i<n;i++){
        xor1 = xor1 ^ arr[i];
    }

    for(int i=1;i<=n;i++){
        xor1 = xor1 ^ i;
    }

    // log(xor1);

    int right_most_bit = xor1 & ~(xor1 - 1);
    // log(right_most_bit);

    // create two buckets
    int x = 0; // missing 
    int y = 0; // repeating


    for(int i=0;i<n;i++){
        if(arr[i] & right_most_bit){
            x = x ^ arr[i];
        }
        else{
            y = y ^ arr[i];
        }
    }


    for(int i=1;i<=n;i++){
        if(i & right_most_bit){
            x = x ^ i;
        }
        else{
            y = y ^ i;
        }
    }

    int x_count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            x_count++;
        }
    }

    if(x_count == 0){
        cout<<"missing number : "<<x<<endl;
        cout<<"repeating number : "<<y<<endl;
    }
    else{
        cout<<"missing number : "<<y<<endl;
        cout<<"repeating number : "<<x<<endl;

    }




    
    


    


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
