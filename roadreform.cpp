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
 
 
/*bool cmp(const pair<ll, ll>& a, const pair<ll, ll>& b)
{
 
	return a.ff < b.ff;
}*/

 /***************End of Template****************/
 
int parent[200005];
int find(int a){
	if(parent[a]==-1){
		return a;
	}
	else{
		int x=find(parent[a]);
		parent[a]=x;
		return x;
	}
}
void merge(int a,int b){
	parent[a]=b;
}
void solve(){
   vector<pair<int,pair<int,int>>> edge;
   int n,m,k;
   int a,b,w;
   cin>>n>>m>>k;
   for(int i=1;i<=n;i++){
      parent[i]=-1;
   }
   int minw=1e9;
   for(int i=0;i<m;i++){
      cin>>a>>b>>w;
      minw=min(minw,abs(w-k));
      if(w>=k){
         w-=k;
      }
      else{
      	w=0;
      }
      edge.pb({w,{a,b}});
   }
   sort(all(edge));
   ll ans=0;
   for(int i=0;i<m;i++){
   	a=find(edge[i].second.first);
   	b=find(edge[i].second.second);
   	if(a!=b){
       ans=ans+(edge[i].first);
       merge(a,b);
   	}
   }
   if(ans==0){
   	ans+=minw;
   }
   cout<<ans<<nl;
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
 