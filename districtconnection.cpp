#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
        cin>>n;
        int a[n];
        int count =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=0;
        int s=-1;
        for(int i=0;i<n;i++){
            if(a[i]!=a[x]){
                s=i;
                break;
            }
        }
        if(s==-1)
        {
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[x]){
                cout<<x+1<<" "<<i+1<<"\n";
            }
        }
        for(int i=1;i<n;i++){
                 if(a[i]!=a[s]&&a[i]==a[x]){   //it should be equal to the content of the first elemnt but not first elemnt itself so checking if any instances of the first element are left and also the sth element shouldnt be equal to itself
                cout<<s+1<<" "<<i+1<<"\n";
            }
        }
        return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

