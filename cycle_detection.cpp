bool dfs(int node,int par)
{
    vis[node] = 1;
    for(auto child:adj[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,node)==1)
                return 1;
        }
        else if(child!=par)
            return 1;
    }
    return 0;
}
