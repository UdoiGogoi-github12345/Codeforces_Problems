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
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        vector<int>b(n);
        if(n==2){
            b[0]=x;
            b[1]=y;
            for(auto i : b)
                cout<<i<<" ";
            cout<<"\n";
            return;
        }
        b[n-1]=1e9+5;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                a[i]=x;
                a[j]=y;
                int diff=y-x;
                int d=j-i;
                if(diff%d==0){
                    diff=diff/d;
                    for(int k=i-1;k>=0;k--)
                        a[k]=a[k+1]-diff;
                    for(int k=i+1;k<n;k++)
                        a[k]=a[k-1]+diff;
                    if(a[0]>0 && a[n-1]<b[n-1])
                        b=a;
                }
            }
        }
        for(auto i : b)
            cout<<i<<" ";
        cout<<"\n";
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
 