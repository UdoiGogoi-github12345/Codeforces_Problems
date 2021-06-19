#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1005;
int n, m;
int a[N][N];
ll A[N][N], B[N][N], C[N][N], D[N][N];
ll ans;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
            A[i][j]=a[i][j]+max(A[i-1][j],A[i][j-1]);
        }
    }
    for(int i=1; i<=n; i++)
	{
        for(int j=m; j>=1; j--)
            B[i][j]=a[i][j]+max(B[i-1][j], B[i][j+1]);
    }
	for(int i=n; i>=1; i--)
    {
	    for(int j=1; j<=m; j++)
            C[i][j]=a[i][j]+max(C[i+1][j], C[i][j-1]);
    }
	for(int i=n; i>=1; i--)
    {
		for(int j=m; j>=1; j--)
            D[i][j]=a[i][j]+max(D[i+1][j], D[i][j+1]);
    }
	for(int i=2; i<n; i++)
    {
		for(int j=2; j<m; j++)
        {
            ans=max(ans, A[i-1][j]+B[i][j+1]+C[i][j-1]+D[i+1][j]);
            ans=max(ans, A[i][j-1]+B[i-1][j]+C[i+1][j]+D[i][j+1]);
        }
	}
    cout<<ans<<endl;
    return 0;
}
