#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define valid(nx,ny) nx>=0 && nx<8 && ny>=0 && ny<8 && vis[nx][ny]==false
int fx[]={+1,-1,-2,-2,-1,+1,+2,+2}; //knight move
int fy[]={+2,+2,+1,-1,-2,-2,-1,+1};
map<char,int>mymap;
bool vis[65][65];
int d[65][65];
void bfs(int x,int y){
    memset(vis,false,sizeof(vis));
    vis[x][y]=true;
    d[x][y]=0;
    queue<pii>q;
    q.push(pii(x,y));
    while(!q.empty()){
        pii top=q.front();q.pop();

        for(int k=0;k<8;k++){
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
void pre(){
    int j=1;
    for(char i='a';i<='h';i++){
        mymap[i]=j++;
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    pre();
    char ch1,ch2;
    int sx,sy,dx,dy;
    while(cin>>ch1>>sy>>ch2>>dy){
        sx=mymap[ch1];
        dx=mymap[ch2];
        bfs(sx-1,sy-1);
        printf("To get from %c%d to %c%d takes %d knight moves.\n",ch1,sy,ch2,dy,d[dx-1][dy-1]);
    }


    return 0;
}
