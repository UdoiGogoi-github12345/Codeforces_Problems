
#define ONLINE_JUDGE

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define ll long long

#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)



void solve(){
   ll n,k;
   cin>>n>>k;
   vector<ll> v(n);
   for(ll i=0;i<n;i++){
   	cin>>v[i];
   }
   ll sum=accumulate(v.begin(),v.end(),0);
   if(sum%k){
   	cout<<"No"<<endl;
   	return;
   }
   ll sm=0,ct=0;vector<ll> cc;
   fo(i,0,n){
     sm+=v[i];
     ct++;
     if(sm==(sum/k)){
     	sm=0;
     	cc.push_back(ct);
     	ct=0;
     }
   }
  
   ll ok=accumulate(cc.begin(),cc.end(),0);
   if(ok==n){
   	cout<<"Yes"<<endl;
   	for(auto it:cc){
   		cout<<it<<" ";
   	}
   }
   else{
   	cout<<"No"<<endl;
   }

} 
int main()
{
	dairymilk6969
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 ll t=1;
	 //cin>>t;
	 while(t--){
	 	   solve();
	   }
}
 