#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
void prime(int n)
{
    bool p[n+1];
    memset(p,true,sizeof(p));
    for(int i=2;i*i<=n;i++)
    {
        if(p[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                p[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(p[i])
        {
            v.push_back(i);
        }
    }
}

int main()
{
    long long n;
    cin>>n;
    prime(n);
    for(auto i: v)
    {
        cout<<i<<endl;
    }
}
