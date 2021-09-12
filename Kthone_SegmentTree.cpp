//░░░░░░░░░░▄
//░░░░░░░░▄▐░▄▄█████▄▄
//░░░░░░▄█████████████▄▀▄▄░▄▄▄
//░░░░░█████████████████▄██████
//░░░░████▐█████▌████████▌█████▌
//░░░████▌█████▌█░████████▐▀██▀
//░▄█████░█████▌░█░▀██████▌█▄▄▀▄
//░▌███▌█░▐███▌▌░░▄▄░▌█▌███▐███░▀
//▐░▐██░░▄▄▐▀█░░░▐▄█▀▌█▐███▐█
//░░███░▌▄█▌░░▀░░▀██░░▀██████▌
//░░░▀█▌▀██▀░▄░░░░░░░░░███▐███
//░░░░██▌░░░░░░░░░░░░░▐███████▌
//░░░░███░░░░░▀█▀░░░░░▐██▐███▀▌
//░░░░▌█▌█▄░░░░░░░░░▄▄████▀░▀
//░░░░░░█▀██▄▄▄░▄▄▀▀▒█▀█░▀
//░░░░░░░░░▀░▀█▀▌▒▒▒░▐▄▄
//░░░░░░░░▄▄▀▀▄░░░░░░▄▀░▀▀▄▄
//░░░░░░▄▀░▄▀▄░▌░░░▄▀░░░░░░▄▀▀▄
//░░░░░▐▒▄▀▄▀░▌▀▄▄▀░░░░░░▄▀▒▒▒▐
//░░░░▐▒▒▌▀▄░░░░░▌░░░░▄▄▀▒▐▒▒▒▒▌
//░░░▐▒▒▐░▌░▀▄░░▄▀▀▄▀▀▒▌▒▐▒▒▒▒▐▐
//░░░▌▄▀░░░▄▀░█▀▒▒▒▒▀▄▒▌▐▒▒▒▒▒▌▌
//░░▄▀▒▐░▄▀░░░▌▒▐▒▐▒▒▒▌▀▒▒▒▒▒▐▒▌
//Anime in the beginning - I'm an absolute winner
//#pragma GCC optimize("Ofast")
//#pragma comment(linker, "/stack:200000000")

#include<bits/stdc++.h>
//#include <cstdio>
//#include <cassert>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
//using namespace __gnu_pbds;

#define ll long long
#define ld long double
#define ull unsigned long long
#define fbo(a) find_by_order(a) //will give a-th largest element
#define ook(a) order_of_key(a) //will give no. of elements strictly lesser than a
#define setbits(x)      __builtin_popcountll(x)
#define str string
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define eb emplace_back
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define ff first
#define ss second
#define pb push_back
#define sp(x,y)         fixed<<setprecision(y)<<x
#define nl '\n'

/*---------------------------------------------------------------------------------------------------------------------------*/

typedef map<ll, ll> mll;
typedef vector<long long> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef vector<vector<ll> > vv;
//typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> PBDS;

/*---------------------------------------------------------------------------------------------------------------------------*/

#define deb(...) cerr << "[" << #__VA_ARGS__ << "]: "; cerr << to_string(__VA_ARGS__) << endl
template <typename T, size_t N> int SIZE(const T (&t)[N]) { return N; } template<typename T> int SIZE(const T &t) { return t.size(); } string to_string(const string s, int x1 = 0, int x2 = 1e9) { return '"' + ((x1 < s.size()) ? s.substr(x1, x2 - x1 + 1) : "") + '"'; } string to_string(const char* s) { return to_string((string) s); } string to_string(const bool b) { return (b ? "true" : "false"); } string to_string(const char c) { return string({c}); } template<size_t N> string to_string(const bitset<N> &b, int x1 = 0, int x2 = 1e9) { string t = ""; for (int __iii__ = min(x1, SIZE(b)),  __jjj__ = min(x2, SIZE(b) - 1); __iii__ <= __jjj__; ++__iii__) { t += b[__iii__] + '0'; } return '"' + t + '"'; } template <typename A, typename... C> string to_string(const A (&v), int x1 = 0, int x2 = 1e9, C... coords); int l_v_l_v_l = 0, t_a_b_s = 0; template <typename A, typename B> string to_string(const pair<A, B> &p) { l_v_l_v_l++; string res = "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; l_v_l_v_l--; return res; } template <typename A, typename... C> string to_string(const A (&v), int x1, int x2, C... coords) { int rnk = rank<A>::value; string tab(t_a_b_s, ' '); string res = ""; bool first = true; if (l_v_l_v_l == 0) res += "\n"; res += tab + "["; x1 = min(x1, SIZE(v)), x2 = min(x2, SIZE(v)); auto l = begin(v); advance(l, x1); auto r = l; advance(r, (x2 - x1) + (x2 < SIZE(v))); for (auto e = l; e != r; e = next(e)) { if (!first) { res += ", "; } first = false; l_v_l_v_l++; if (e != l) { if (rnk > 1) { res += "\n"; t_a_b_s = l_v_l_v_l; }; } else { t_a_b_s = 0; } res += to_string(*e, coords...); l_v_l_v_l--; } res += "]"; if (l_v_l_v_l == 0) res += "\n"; return res; } void dbgm() {;} template<typename Heads, typename... Tails> void dbgm(Heads H, Tails... T) { cerr << to_string(H) << " | "; dbgm(T...); }
#define debm(...) cerr << "[" << #__VA_ARGS__ << "]: "; dbgm(__VA_ARGS__); cerr << endl


/*---------------------------------------------------------------------------------------------------------------------------*/
void FIO() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
}
/*---------------------------------------------------------------------------------------------------------------------------*/

ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}

void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m

/*--------------------------------------------------------------------------------------------------------------------------*/
ll setbit(int n, int pos  ) { return n = n | (1 << pos) ; }
ll resetbit(int n, int pos ) {  return n =  n & ~(1 << pos ); }
bool checkbit(int  n, int pos ) { return (bool ) (n & (1 << pos))  ; }
ll bitcount(ll x ) {
	int cnt = 0;
	fo(i, 0, 20) {
		if (checkbit(x, i)  )
			cnt++ ; //if ith bit is set den return ct
	}
	return cnt;
}
/*--------------------------------------------------------------------------------------------------------------------------*/

//You have struggled your way here with no guidance from anyone,keep the faith
//You have practiced a lot,have faith in yourself
//You have practiced a hell lot of questions,have faith in yourself
//If nothing strikes for a period of time,calm down,drink water and think again from the start
//Dont just stare at the problem use that damn pen and paper,write down whats in ur head

//AFTER THE WAR AND STRUGGLE,PEACE RESIDES,WORK HARD TODAY FOR THE BETTER TOMORROW




const ll N = 2e5 + 7;
const ll mod = 1e9 + 7;
const ll INF = 9223372036854775807 ;


vll seg(400005);
void build(vll& a, ll s, ll e, ll idx) {
	if (s == e) {
		seg[idx] = a[s];
		return;
	}
	ll mid = s + (e - s) / 2;
	build(a, s, mid, 2 * idx);
	build(a, mid + 1, e, 2 * idx + 1);
	seg[idx] = seg[2 * idx] + seg[2 * idx + 1];
	return;
}

void update(vll& a, ll ss, ll se, ll idx, ll i) {
	if (i<ss or i>se) {
		return;
	}

	if (ss == se) {
		if (a[ss] == 0) {
			a[ss] = 1;
			seg[idx] = 1;
		}
		else {
			a[ss] = 0;
			seg[idx] = 0;
		}
		return;
	}
	ll mid = ss + (se - ss) / 2;
	update(a, ss, mid, 2 * idx, i);
	update(a, mid + 1, se, 2 * idx + 1, i);
	seg[idx] = seg[2 * idx] + seg[2 * idx + 1];
	return;


}

ll query(vll& a, ll ss, ll se, ll idx, ll k) {
	if (ss == se) {
		return ss;
	}
	ll mid = (ss + se) / 2;
	if (k < seg[2 * idx]) {
		return query(a, ss, mid, 2 * idx, k);
	}
	else {
		return query(a, mid + 1, se, 2 * idx + 1, k - seg[2 * idx]);
	}
}


void solve() {
	ll n, m;
	cin >> n >> m;
	vll a(n);
	fo(i, 0, n) {
		cin >> a[i];
	}
	seg.resize(4 * n + 1);
	for (ll i = 0; i <= 4 * n + 1; i++) {
		seg[i] = {0};
	}
	build(a, 0, n - 1, 1);
	for (ll i = 1; i <= m; i++) {
		ll p, b;
		cin >> p >> b;
		if (p == 1) {
			update(a, 0, n - 1, 1, b);
		}
		else if (p == 2) {
			cout << query(a, 0, n - 1, 1, b) << nl;
		}

	}
}
int main()
{

	FIO();
	ll t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}
