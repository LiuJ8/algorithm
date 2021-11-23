#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
using namespace std;
const int N = 1e5+10;
string a[N];
typedef double ll;
ll get(string a)
{
    ll res=0;
    for(int i=0;i<a.length();i++)
    {
        res=res*10+a[i]-'0';
    }
    return res;
}
int main()
{
    int n,m;cin>>n>>m;
    int sum=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            ll x=get(a[i]),y=get(a[j]);
            ll res=x*pow(10,a[j].length())+y;
            ll res1=y*pow(10,a[i].length())+x; 
            if(res/m==(int)(res/m)) sum++;
            if(res1/m==(int)(res1/m)) sum++;
        }
    }
     cout<<sum;   
}