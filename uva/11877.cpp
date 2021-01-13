#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    int n;
    while(cin>>n && n!=0){
        int drink=0;
            while(n>=2){
            if(n==2) n++;
            drink+=n/3;
            n=(n/3)+(n%3);
        }
        cout<<drink<<endl;
    }
    return 0;
}
