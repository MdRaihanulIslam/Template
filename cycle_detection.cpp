void dfs(int node)
{
    if(vis[node]==1)
    {
        cycle = 1;
        return;
    }
    if(vis[node]==2)
        return;
    vis[node] = 1;
    for(auto child:adj[node])
        dfs(child);
    vis[node] = 2;
}
