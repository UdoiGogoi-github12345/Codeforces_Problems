		/*****************Better three hours too soon than a minute too late.*********************/
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

bool prime(int n) {
 	if (n == 0 || n == 1) return 0;
 	for (int i = 2; i * i <= n; i++) {
 		if (n % i == 0) return 0;
 	}
 	return 1;
 }


void solve(){
   ll n;
	cin >> n;
	char s[n][n];
	fo(i, 0, n)
	{
		fo(j, 0, n)cin >> s[i][j];
	}
	ll cnt = 0;
	ll f = 0, f1 = 0, f2 = 0, f3 = 0; //1100
	if (s[0][1] != '1')
	{
		cnt++; f = 1;
	}
 
	if (s[1][0] != '1')
	{
		cnt++; f1 = 1;
	}
	if (s[n - 1][n - 2] != '0')
	{
		cnt++; f2 = 1;
	}
 
	if (s[n - 2][n - 1] != '0')
	{
		cnt++; f3 = 1;
	}
	if (cnt <= 2)
	{
		cout << cnt << nl;
		if (f)
			cout << 1 << " " << 2 << nl;
		if (f1)
			cout << 2 << " " << 1 << nl;
		if (f2)
			cout << n << " " << n - 1 << nl;
		if (f3)
			cout << n - 1 << " " << n << nl;
		return;
	}
 
	f = 0, f1 = 0, f2 = 0, f3 = 0; //0011
	cnt = 0;
	if (s[0][1] != '0')
	{
		cnt++; f = 1;
	}
 
	if (s[1][0] != '0')
	{
		cnt++; f1 = 1;
	}
	if (s[n - 1][n - 2] != '1')
	{
		cnt++; f2 = 1;
	}
 
	if (s[n - 2][n - 1] != '1')
	{
		cnt++; f3 = 1;
	}
	if (cnt <= 2)
	{
		cout << cnt << nl;
		if (f)
			cout << 1 << " " << 2 << nl;
		if (f1)
			cout << 2 << " " << 1 << nl;
		if (f2)
			cout << n << " " << n - 1 << nl;
		if (f3)
			cout << n - 1 << " " << n << nl;
		return;
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
 