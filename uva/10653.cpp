#include<bits/stdc++.h>
using namespace std;
int grid[1001][1001];
bool vis[1001][1001];
int d[1001][1001];
int r,c;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
#define pii pair<int,int>
#define valid(nx,ny) nx>=0 && nx<r && ny>=0 && ny<c && grid[nx][ny]!=-1 && vis[nx][ny]==false
void bfs(int x,int y){
    memset(vis,false,sizeof(vis));
    vis[x][y]=true;
    d[x][y]=0;
    queue<pii>q;
    q.push(pii(x,y));
    while(!q.empty()){
        pii top=q.front();q.pop();

        for(int k=0;k<4;k++){
            x=top.first+fx[k];
            y=top.second+fy[k];
            if(valid(x,y)){
                vis[x][y]=true;
                d[x][y]=d[top.first][top.second]+1;
                q.push(pii(x,y));
            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    while(cin>>r>>c && r!=0 && c!=0){
        memset(grid,0,sizeof(grid));
        int n;cin>>n;
        while(n--){
            int row;cin>>row;
            int m;cin>>m;
            while(m--){
                int temp;cin>>temp;
                grid[row][temp]=-1;
            }
        }
        int sX,sY;cin>>sX>>sY;
        int dX,dY;cin>>dX>>dY;
        bfs(sX,sY);
        cout<<d[dX][dY]<<endl;
    }
}
