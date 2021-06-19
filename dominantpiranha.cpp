#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        int max=a[n-1];
        for(int i=0;i<n;i++)
        {
            if(b[i]==max)
            {
                if((i-1>=0&&b[i-1]!=max)||(i+1<=n-1&&b[i+1]!=max)){
                    cout<<i+1<<endl;
                    return;
                }
            }
        }
        cout<<-1<<endl;
        return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
