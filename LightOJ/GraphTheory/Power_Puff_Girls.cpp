#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define valid(nx,ny) a[nx][ny]!='#' && a[nx][ny]!='m' && vis[nx][ny]==false
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
char a[21][21];
bool vis[21][21];
int d[21][21];
int m,n;
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
pii find(char ch){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==ch){
                pii temp;
                temp.first=i;
                temp.second=j;
                return temp;
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
void solution(){
    input();
    pii a=find('a');
    pii b=find('b');
    pii c=find('c');
    pii h=find('h');

    bfs(a.first,a.second);
    int x=d[h.first][h.second];

    bfs(b.first,b.second);
    int y=d[h.first][h.second];

    bfs(c.first,c.second);
    int z=d[h.first][h.second];


    cout<<max(x,max(y,z))<<endl;
}
int main()
{
//    freopen("in.txt","r",stdin);
    int t;cin>>t;
    int c=1;
    while(t--){
        printf("Case %d: ",c++);
        solution();
    }
}
