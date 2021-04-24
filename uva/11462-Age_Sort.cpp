#include<bits/stdc++.h>
using namespace std;
void countSort(int n){
    int b[200];
    memset(b,0,sizeof(b));
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        b[temp]++;
    }
    bool flag=false;
    for(int i=0;i<=110;i++){
        temp=b[i];
        for(int j=0;j<temp;j++){
            if(flag==true){
                cout<<" ";
            }
            cout<<i;
            if(flag==false) flag=true;
        }
    }
    cout<<endl;
}
int input(int a[],int n){
    int max=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max) max=a[i];
    }
    return max;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    while(cin>>n && n!=0){
        countSort(n);
    }
}
