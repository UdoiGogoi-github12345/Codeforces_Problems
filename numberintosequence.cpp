		/*OM NAMAH SHIVAY*/
#define ONLINE_JUDGE
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define db(x)                   cout<<#x<<"="<<x<<'\n'
#define db2(x,y)                 cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define ll long long
#define ld long double
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define ull unsigned long long
#define setbits(x)      __builtin_popcountll(x)
#define str string
#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define forr(i,n,a) for(ll i=n;i>=a;i--)
#define cases   long long t;cin>>t;while(t--)
#define eb emplace_back
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define ff first
#define ss second
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define sp(x,y)         fixed<<setprecision(y)<<x
#define nl '\n'
#define sz(x) ((int)(x).size())
// const int MOD = (int) 998244353 ;
const ll INF = 1e18 ;
#define printall(a) fo(i,0,a.size()) cout<<a[i]<<" "; cout<<endl;
 
 
 
typedef vector<int> vi;
typedef map<ll, ll> mll;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef map<ll, int> mli;
typedef map<char, int> mci;
typedef vector<long long> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef vector<vector<int> > vv;
 
const ll N = 2e5 + 7;
const int mod = 1e9 + 7;
 
 
bool cmp(const pair<ll, ll>& a, const pair<ll, ll>& b)
{
 
	return a.ff < b.ff;
}


void solve(){  
    ll n;
    cin>>n;
    ll number=n;
    vector<pair<ll,ll>> v1;  
    for (ll i = 2; i <= sqrt(n); i++)  
    {  
    	ll cnt=0; //for each prime number
        while (n % i == 0)  
        {  
            cnt++;
            n = n/i;  
        } 
        if(cnt!=0){
          v1.pb(make_pair(cnt,i));
        }       
    }
    if(n>1){ //if there is any other prime left
    	v1.pb(make_pair(1,n));
    }  

    sort(all(v1));
    reverse(all(v1));
    
    if(v1.size()==1){
        cout<<v1[0].ff<<nl;
        for(ll i=1;i<=v1[0].ff;i++){
            cout<<v1[0].ss<<" ";
        }
        cout<<nl;
    }
    else{
        ll prod=1;
        cout<<v1[0].ff<<nl;
        for(ll i=1;i<=v1[0].ff-1;i++){
            cout<<v1[0].ss<<" ";
            prod*=v1[0].ss;
        }
        cout<<number/prod<<nl;
    }

	/*ll ans = v1.back().ff;
	cout << ans << "\n";
	

    ll pr=1;

    for(ll i=0;i<ans;i++){
        while(!v1.empty() and v1.back().ff+i==ans){
           pr*=v1.back().ss;
           v1.pop_back();
        }
        cout<<pr<<" ";
    }
    cout<<endl;*/
 
    
    
 } 
int main()
{
	dairymilk6969
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	 ll t; 
	 cin>>t;
	 while(t--){
	 	   solve();
	   }
}
