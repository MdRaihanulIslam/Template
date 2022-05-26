bool vis[N];
vl primes;
int sz;
void sieve()
{
    int n = N-5;
    for(int i=2; i<=n; i++) vis[i] = 1;
    for(int i=3; i*i<=n; i+=2)
    {
        if(vis[i])
        {
            for(int j=i*i; j<=n; j+=i)
                vis[j] = 0;
        }
    }
    primes.pb(2);
    for(int i=3; i<=n; i+=2)
    {
        if(vis[i])
            primes.pb(i);
    }
    sz = primes.size();
}
