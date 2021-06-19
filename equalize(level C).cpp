#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    int cost=0;
    for(int i=0;i<n;)
    {
        //check id the two compared digits are equal
        if(a[i]!=b[i]){  //swap or flip
           if(i+1<n&&a[i]!=a[i+1]&&a[i+1]!=b[i+1]){  //swap
               i=i+2;
               cost++;
           }
           else{
            i++; //flip
            cost++;
           }
        }
        else
            i++; //if equal the move on to the next digit
    }
    cout<<cost<<"\n";
return 0;

}
