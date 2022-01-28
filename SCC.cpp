/* problem link - https://codeforces.com/contest/1249/submission/118274828 */



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
vi ar[200000],tr[200000],order,scc;
bool vis[200000];
void dfs(int x)
{
    vis[x] = 1;
    for(auto child:ar[x])
        if(!vis[child])
        dfs(child);
    order.pb(x);
}
void dfs1(int x)
{
    vis[x] = 1;
    for(auto child:tr[x])
        if(!vis[child])
        dfs1(child);
    scc.pb(x);
}
int main()
{
    Raihan
    int n;
    tst
    {
        cin>>n;
        vl v(n+1);
        for(int i=1;i<=n;i++)
        {
            ar[i].clear(),tr[i].clear();
            vis[i] = false;
        }
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            ar[i].pb(v[i]);
            tr[v[i]].pb(i);
        }
        for(int i=1;i<=n;i++)
            if(!vis[i])
            dfs(i);
        for(int i=1;i<=n;i++)
            vis[i] = 0;
        reverse(order.begin(),order.end());
        vi ans(n+1);
        for(int i=0;i<n;i++)
        {
            if(!vis[order[i]])
            {
                scc.clear();
                dfs1(order[i]);
                for(int j=0;j<scc.size();j++)
                {
                    ans[scc[j]] = scc.size();
                }
            }
        }
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<' ';
        cout<<endl;
    }




    return 0;
}

 
