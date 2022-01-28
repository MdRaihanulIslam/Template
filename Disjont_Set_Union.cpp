ll par[N];
int Find(int u)
{
    if (u == par[u])
        return u;
    return par[u] = Find(par[u]);
}
void Union(int u, int v)
{
    par[Find(u)] = Find(v);
}
void init()
{
    for (int i = 1; i <= n; i++)
        par[i] = i;
}
