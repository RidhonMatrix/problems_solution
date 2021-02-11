#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define valid(nx,ny) nx>=0 && nx<h && ny>=0 && ny<w and a[nx][ny]!='#' and vis[nx][ny]==false

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

int fx[]= {0,0,1,1,-1,-1,1,-1}; // 8 direction
int fy[]= {1,-1,1,-1,1,-1,0,0};

int grid[100][100];
bool vis[100][100];
int d[100][100];

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
void input(){
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}
