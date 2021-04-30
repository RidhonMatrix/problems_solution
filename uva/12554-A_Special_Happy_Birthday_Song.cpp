#include<bits/stdc++.h>
using namespace std;
string name[105];
string wish[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
    int m=n/16;
    m++;

    for(int i=1,k=0;i<=m;i++){
        for(int j=0;j<16;j++,k++){
            if(k==n) k=0;
            cout<<name[k]<<": "<<wish[j]<<endl;
        }
    }
}
