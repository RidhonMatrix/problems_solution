#include<bits/stdc++.h>
using namespace std;
int fx[]={+1,-1,-2,-2,-1,+1,+2,+2}; //knight move
int fy[]={+2,+2,+1,-1,-2,-2,-1,+1};
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;cin>>n;
    while(n--){
        string s;
        cin>>s;
        int a=s[0]-96;
        int b=s[1]-48;
        int c=0;
        for(int i=0;i<8;i++){
            int x=fx[i]+a;
            int y=fy[i]+b;
            if( (x>=1 && x<=8) && (y>=1 && y<=8)) c++;
        }
        cout<<c<<endl;

    }

}
