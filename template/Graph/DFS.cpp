//O(v+e)

void dfs(int v){
  vis[v] = true;
  for(int i = 0; i < edge[v].size(); i++){
    int child = edge[v][i];
    if(vis[child] == false)
      dfs(child);
  }
}

// for(int child : edge[v]){
//   if(!vis[child])
//     dfs(child)
// }
