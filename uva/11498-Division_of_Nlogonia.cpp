#include<bits/stdc++.h>
using namespace std;
void checkArea(int n,int m,int x,int y){
    if(x==n || y==m){
        cout<<"divisa"<<endl;
    }
    else if(x>n && y>m){
        cout<<"NE"<<endl;
    }
    else if(x>n && y<m){
        cout<<"SE"<<endl;
    }
    else if(x<n && y<m){
        cout<<"SO"<<endl;
    }
    else if(x<n && y>m){
        cout<<"NO"<<endl;
    }
}
int main()
{
    int k;
    int n,m;
    int x,y;
    while(cin>>k && k!=0){
        cin>>n>>m;
        for(int i=0;i<k;i++){
            cin>>x>>y;
            checkArea(n,m,x,y);
        }
    }

}
