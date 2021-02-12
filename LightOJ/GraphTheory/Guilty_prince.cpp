#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define valid(nx,ny) nx>=0 && nx<h && ny>=0 && ny<w and a[nx][ny]!='#' and vis[nx][ny]==false
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int w,h;
char a[20][20];
bool vis[20][20];
int bfs(int x,int y){
    int c=1;
    queue<pii>q;
    memset(vis,false,sizeof(vis));
    vis[x][y]=true;
    q.push(pii(x,y));
    while(!q.empty()){
        pii t=q.front();q.pop();
        for(int k=0;k<4;k++){
            int tx=t.first+fx[k];
            int ty=t.second+fy[k];
            if(valid(tx,ty)){
                vis[tx][ty]=true;
                q.push(pii(tx,ty));
                c++;
            }
        }
    }
    return c;
}
pii findSource(){
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++){
            if(a[i][j]=='@'){
                pii temp;
                temp.first=i;
                temp.second=j;
                return temp;
            }
        }
}
void input(){
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            cin>>a[i][j];
}
void solution()
{
    cin>>w>>h;
    input();
    pii s=findSource();
    int ans=bfs(s.first,s.second);
    cout<<ans<<endl;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;cin>>t;
    int c=1;
    while(t--){
        printf("Case %d: ",c++);
        solution();
    }
}
