#include<bits/stdc++.h>
using namespace std;
bool isCapital(char ch){
    if( (ch>='A' && ch<='Z')) return true;
    return false;
}
bool isChar(char ch){
    if( (ch>='A' && ch<='Z') || (ch>='a' && ch<='z') ) return true;
    return false;
}
void cryptanalysis(std::string &s,int a[]){

    for(int i=0;i<s.size();i++){
        if(isChar(s[i])){
            if(isCapital(s[i])){
                a[s[i]-65]++;
            }
            else{
                a[s[i]-97]++;
            }
        }
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;cin>>n;
    getchar();
    string s;
    int a[26];
    memset(a,0,sizeof(a));
    while(n--){
        getline(cin,s);
        cryptanalysis(s,a);
    }
    bool vis[26];
    memset(vis,false,sizeof(vis));
    for(int i=0;i<26;i++){
        int max=-1;
        int index=-1;
        for(int j=0;j<26;j++){
            if(a[j]>max && vis[j]==false){
                index=j;
                max=a[j];
            }
        }
        vis[index]=true;
        if(max==0) continue;
        printf("%c %d\n",index+65,max);
    }

}
