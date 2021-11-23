#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int res;
typedef long long int  ll;
ll gcd(ll a,ll b,ll &x,ll &y)
{
    if(b==0) 
    {
        x=1;y=0;return a;
    }
    ll r=gcd(b,a%b,x,y);
    //cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
    ll temp=y;
    y=x-(a/b)*y;
    x=temp;
    return r;
}
int main()
{
    ll a,b,x,y;cin>>a>>b;
    gcd(a,b,x,y);
    x=(x%b+b)%b; //±‹√‚x «∏∫ ˝
    cout<<x;
}