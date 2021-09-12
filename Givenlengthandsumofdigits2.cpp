#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define ONLINE_JUDGE
#include<bits/stdc++.h>
#include<iomanip>

using namespace std;;
#define db1(x)                cout<<#x<<": "<<x<<"\n"
#define db2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<"\n"
#define db3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<"\n"
#define db4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define fbo(a) find_by_order(a) //will give a-th largest element
#define ook(a) order_of_key(a) //will give no. of elements strictly lesser than a
#define setbits(x)      __builtin_popcountll(x)
#define str string
#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define eb emplace_back
#define pq priority_queue
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define ff first
#define ss second
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define sp(x,y)         fixed<<setprecision(y)<<x
#define nl '\n'
#define sz(x) ((int)(x).size())

typedef map<ll, ll> mll;
typedef map<char, int> mci;
typedef vector<long long> vll;
typedef pair<ll, ll> pll;
typedef map<pll, int> mpll;
typedef vector<pll> vpll;
typedef vector<vector<ll> > vv;

const ll N = 2e5 + 7;
const ll mod = 1e9 + 7;
const ll INF = 9223372036854775807 ;

template <class T> T chmax(T &a, const T &b) { return a = max(a, b); }
template <class T> T chmin(T &a, const T &b) { return a = min(a, b); };
/*bool cmp(const pair<ll, ll>& a, const pair<ll, ll>& b)
{

	return a.ff < b.ff;
}*/
/***************End of Template****************/
/***************KEEP CODING*******************/

ll n, s;
bool dp[905][105]; bool dp1[905][105];
string solve2(string currans, ll currpos, ll currsum) {
	if (currsum > s) {
		return "-1";
	}
	if (dp1[currsum][currpos]) {
		return "-1";
	}
	dp1[currsum][currpos] = true;
	if (currpos == n) {
		if (currsum == s) {
			return currans;
		}
		else {
			return "-1";
		}
	}



	for (int i = 9; i >= 0; i--) {
		if (currpos == 0 and i == 0 and n > 1) {
			continue;
		}
		char num = i + '0';
		string ret = solve2(currans + num, currpos + 1, currsum + i);
		if (ret != "-1") {
			return ret;
		}
	}
	return "-1";
}

string solve1(string currans, ll currpos, ll currsum) {
	if (currsum > s) {
		return "-1";
	}
	if (dp[currsum][currpos]) {
		return "-1";
	}
	dp[currsum][currpos] = true;
	if (currpos == n) {
		if (currsum == s) {
			return currans;
		}
		else {
			return "-1";
		}
	}


	for (int i = 0; i <= 9; i++) {
		if (currpos == 0 and i == 0 and n > 1) { //important
			continue;
		}
		char num = i + '0';
		string ret = solve1(currans + num, currpos + 1, currsum + i);
		if (ret != "-1")
			return ret;
	}
	return "-1";
}

void solve() {
	cin >> n >> s; //n represents length  and s represents the sum


	cout << solve1("", 0, 0) << " " << solve2("", 0, 0) << nl;

}
int main()
{
	dairymilk6969
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t = 1;
	//cin>>t;
	while (t--) {
		solve();
	}
}

