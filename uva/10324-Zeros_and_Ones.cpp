#include<bits/stdc++.h>
using namespace std;
bool check(std::string &str,int x,int y){
    char ch=str[x];
    for(int i=x;i<=y;i++){
        if(ch!=str[i]) return false;
    }
    return true;
}
int main()
{
//    freopen("in.txt","r",stdin);

    string str;
    int n;
    int c=1;
    int x,y;
    while(cin>>str){
        printf("Case %d:\n",c++);
        cin>>n;
        while(n--){
            cin>>x>>y;
            if(x>y) swap(x,y);
            if(check(str,x,y)){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
}
