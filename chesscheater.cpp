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
   ll n,k,cl=0;
   cin>>n>>k;
   str s;
   cin>>s;
   fo(i,0,n){
   	if(s[i]=='L'){
   		cl++;
   	}
   }
   ll sum=1;
   if(k==0){
   	ll sum=0;
      for(ll i=1;i<=n-2;i++){
   		if(s[i]=='L'&&s[i-1]=='W'&&s[i+1]=='W'){
           sum+=5;
   		}
   		for(ll i=1;i<=n-1;i++){
   			if(s[i-1]=='W'&&s[i]=='L'){
              sum+=3;
   			}
   		}
   		for(ll i=0;i<=n-2;i++){
   			if(s[i]=='L'&&s[i+1]=='W'){
              sum+=3;
   			}
   		}
   }
   cout<<sum<<nl;
}
   if(cl<=k){
   	fo(i,1,n){
   		sum+=2;
   	}
   	cout<<sum<<nl;
   }
   else{
   	ll tt;
   	ll sum=0;
   	for(ll i=1,j=0;i<=n-2&&j<k;i=i+2,j++){
   		if(s[i]=='L'&&s[i-1]=='W'&&s[i+1]=='W'){
             sum+=5;
             tt=j;
   	     }
   	}
   	if(tt<k){
   		for(ll i=1,j=tt;i<=n-1&&j<k;i++,j++){
   			if(s[i-1]=='W'&&s[i]=='L'){
   				sum+=1;
   				tt=j;
   			}
   		}
   	}
   	for(ll i=1;i<=n-1;i++){
   			if(s[i-1]=='W'&&s[i]=='L'){
              sum+=3;
   			}
   		}
   		for(ll i=0;i<=n-2;i++){
   			if(s[i]=='L'&&s[i+1]=='W'){
              sum+=3;
   			}
   		}
   	cout<<sum<<nl;

   }
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
 