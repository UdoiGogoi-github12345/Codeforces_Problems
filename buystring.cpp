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
 ll n,c0,c1,h;
 cin>>n;
 cin>>c0;
 cin>>c1;
 cin>>h;
 string s;
 cin>>s;
 ll k=s.length();
 ll sum=0;ll sum1=0;
 fo(i,0,k){
 	if(s[i]=='0'){
 		sum+=c0;
 	}
 	else{
 		sum+=c1;
 	}
 }
 if(c0==c1){
 	cout<<sum<<nl;
 	return;
 }
 if(c0<c1){
 	fo(i,0,k){
 		if(s[i]=='1'){
 			s[i]='0';
 			sum1=sum1+h;
 		}
 	}
 }
 else{
 	fo(i,0,k){
 		if(s[i]=='0'){
 			s[i]='1';
 			sum1=sum1+h;
 		}
 	}
 }
 fo(i,0,k){
 	if(s[i]=='1'){
 		sum1+=c1;
 	}
 	else{
 		sum1+=c0;
 	}
 }
 cout<<min(sum,sum1)<<nl;
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
 