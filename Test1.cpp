#include<iostream>
#include<cstring>
using namespace std;
int a[10];
int main()
{
    memset(a,1,sizeof(a));
    for(int i=1;i<=10;i++) cout<<a[i]<<" ";
    cout<<0x01010101;
}