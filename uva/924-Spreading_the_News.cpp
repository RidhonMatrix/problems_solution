#include<bits/stdc++.h>
using namespace std;
#define MAX 2600
vector<int>edges[MAX];
int dis[MAX];
bool vis[MAX];
int level[MAX];
void bfs(int s){
    memset(vis,false,sizeof(vis));
    memset(dis,0,sizeof(dis));
    memset(level,0,sizeof(level));
    int u,v;
    queue<int>q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int i=0;i<edges[u].size();i++){
            v=edges[u][i];
            if(vis[v]==false){
                vis[v]=true;
                q.push(v);
                dis[v]=dis[u]+1;
                level[dis[v]]++;
            }
        }
    }

}
int main()
{
    //freopen("in.txt", "r", stdin);

    for(int i=0;i<=2500;i++){
        edges[i].clear();
    }

    int e,n,temp;
    cin>>e;

    for(int i=0;i<e;i++){
        cin>>n;
        while(n--){
            cin>>temp;
            edges[i].push_back(temp);
        }
    }

    int t;
    cin>>t;
    while(t--){
        cin>>temp;
        bfs(temp);
        int max=0;
        int ans=0;
        for(int i=0;i<e;i++){
            if(max<level[i]){
                max=level[i];
                ans=i;
            }
        }
        if(max==0) cout<<0<<'\n';
        else cout<<max<<" "<<ans<<'\n';

    }

}
