#include<bits/stdc++.h>
using namespace std;
vector <int> G[100];
bool visit[100]= {0};
int dis[100]={0};
queue <int> q;


int bfs(int s, int d)
{
    int u, v;
    q.push(s);
    visit[s]=1;
    while(!q.empty())
    {
        u=q.front();
        printf("%d ", u);
        q.pop();
        if(u==d)
        {
            return dis[u];
        }
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            if(visit[v]==0)
            {
                visit[v]=1;
                q.push(v);
                dis[v]=dis[u]+1;
            }
        }
    }
}


int main()
{
    int n, m, u, v, s, d, d1;
    scanf("%d%d", &n, &m);  //n is number of node & m is number of edge
    for(int i=0; i<m; i++)
    {
        scanf("%d%d", &u, &v);  //u and v are two two node of an edge
        G[u].push_back(v);
        G[v].push_back(u); // For bidirectional edge
    }
    printf("S=");
    scanf("%d", &s);
    printf("D=");
    scanf("%d", &d);
    d1=bfs(s, d);
    printf("\n%d", d1);
    return 0;
}
