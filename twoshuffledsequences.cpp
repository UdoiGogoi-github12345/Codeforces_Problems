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


int main()
{
	dairymilk6969
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       ll n;
       cin>>n;
       ll a[n];
       fo(i,0,n){cin>>a[i];}
       ll flag=0;
       mll m;
       fo(i,0,n){
       	m[a[i]]++;
       }
       fo(i,0,n){
       	if(m[a[i]]>2){
       		flag=1;
       		break;
       	}
       }
       if(flag==1){
       	cout<<"NO"<<nl;
       }
       else{
         ll count=0;
       vll v1;
       vll v2;
       fo(i,0,n){
       	if(m[a[i]]==1){
       		count++;
       	}
       }
       if(count==n){
       	cout<<"YES"<<nl;
       	cout<<0<<nl;
       	cout<<nl;
       	cout<<n<<nl;
       	sort(a,a+n,greater<int>());
       	fo(i,0,n){
       		cout<<a[i]<<" ";
       	}
       }
       else{
       	  fo(i,0,n){
       		if(m[a[i]]>1){
                v1.pb(a[i]);
                m[a[i]]=m[a[i]]-1; //becuae if we dont decrease then for the other 7 it will still be 2
       		}
       	}
       	set<ll> s;
       	fo(i,0,n){
       		s.insert(a[i]);
       	}
       	for(auto i:s){
          v2.pb(i);
       	}
        cout<<"YES"<<nl;
       	cout<<v1.size()<<nl;
       	sort(v1.begin(),v1.end());
        fo(i,0,v1.size()){
        	cout<<v1[i]<<" ";
        }
        cout<<nl;
        cout<<v2.size()<<nl;
        sort(v2.begin(),v2.end(),greater<int>());
        fo(i,0,v2.size()){
        	cout<<v2[i]<<" ";
        }
        cout<<nl;
       }
       }
  }
 