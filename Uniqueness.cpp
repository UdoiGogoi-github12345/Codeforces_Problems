		/********Start of Template*******/
		/***In The Name Of God***/
		/****Better three hours too soon than a minute too late.****/

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
 
template <class T> T chmax(T &a, const T &b) { return a = max(a, b); }
template <class T> T chmin(T &a, const T &b) { return a = min(a, b); }

/*bool cmp(const pair<ll, ll>& a, const pair<ll, ll>& b)
{
 
	return a.ff < b.ff;
}*/

 /***************End of Template****************/



void solve(){
   ll n;
   cin>>n;
   ll a[n];
   fo(i,0,n){
   	cin>>a[i];
   }
   mll m;ll res=n-1;
   for(ll i=0;i<n;i++){
   	 bool validprefix=true;
   	 for(ll j=0;j<i;j++){
   	 	m[a[j]]++;
   	 	if(m[a[j]]==2){
   	 		validprefix=false;
   	 		break;
   	 	}
   	 }
   	 ll min_index_suffix=n;
   	 for(ll j=n-1;j>=i;j--){
   	 	m[a[j]]++;
   	 	if(m[a[j]]==1){
           min_index_suffix=j;
   	 	}
   	 	else{
   	 		break;
   	 	}
   	 }
   	 if(validprefix)
   	    res=min(res,min_index_suffix-i);

   	m.clear();
   }
   cout<<res<<nl;





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
	 ll t=1;
	 //cin>>t;
	 while(t--){
	 	   solve();
	   }
}
 