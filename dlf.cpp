/** Starting with the name of Almighty ALLAH **/
/** Bismillahir Rahmanir Rahim **/
#include<bits/stdc++.h>
#define   fr(i,a,b)       for(ll i=a;i<=b;i++)
#define   ll              long long int
#define   ull             unsigned long long int
#define   tst             int t;cin>>t;while(t--)
#define   pb              push_back
#define   vc              vector
#define   vi              vc<int>
#define   vl              vc<ll>
#define   vs(v)           vector<string>v
#define   rsrt(v)         sort(v.rbegin(),v.rend());
#define   all(v)          v.begin(),v.end()
#define   pf(x)           cout<<x<<endl;
#define   mp(x,y)         make_pair(x,y)
#define   yes             cout<<"YES"<<endl;
#define   no              cout<<"NO"<<endl;
#define   ms(x,n)         memset(x,n,sizeof(x));
#define   srt(v)          sort(v.begin(),v.end());
#define   rvs(v)          reverse(v.begin(),v.end());
#define   Raihan          ios::sync_with_stdio(false);cin.tie(0);
#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   str             int s[200000];
#define   coutv(v)        for(auto it:v)cout<<it<<' ';cout<<endl;
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   mod             1000000007
using namespace std;
ll dp[100001],sum[100001];
int main()
{
    Raihan
    ll tt,k;
    cin>>tt>>k;
    dp[0] = 1;
    for(int i=1;i<=100000;i++)
    {
        if(i>=k) dp[i] = (dp[i]+dp[i-k])%mod;
        dp[i] = (dp[i]+dp[i-1])%mod;
    }
    sum[0] = 1;
    for(int i=1;i<=100000;i++)
    {
        sum[i] = (sum[i-1]+dp[i])%mod;
    }
    while(tt--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<(sum[b]-sum[a-1]+mod)%mod<<endl;
    }



    return 0;
}

