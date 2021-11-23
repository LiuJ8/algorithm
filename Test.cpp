#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 1e8;
int a[N],res[N],su[N];
int main()
{
    int n,q;cin>>n>>q;
    for(int i=2;i<=n;i++) su[i]=1;
    int len=0;
    for(int i=2;i<=n;i++)
    {
        if(su[i])
        {
            res[++len]=i;
          //  cout<<i<<"ÊÇËØÊý"<<endl;
        }
        for(int j=1;j<=len&&i*res[j]<=n;j++)
        {
              su[i*res[j]]=0;
            if(i%res[j]==0) break;
        }
    }
    while(q--)
    {
        int temp;
        scanf("%d",&temp);
        cout<<res[temp]<<endl;
    }
    //for(int i=1;i<=len;i++) cout<<res[i]<<" ";
}