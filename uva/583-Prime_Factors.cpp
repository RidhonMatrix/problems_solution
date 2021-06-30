#include <iostream>
#include <string.h>
#include<vector>
using namespace std;
void primeFact(long long n)
{
    cout<<n<<" =";
    if(n<0){
        cout<<" -1 x";
        n*=-1;
    }
    vector<int>p;
    for(long long i=2;i*i<=n;i++){
        int c=0;
        if(n%i==0){
            while(n%i==0){
                p.push_back(i);
                n/=i;
            }
        }
    }
    if(n>1){
        p.push_back(n);
    }
    for(int i=0;i<p.size();i++){
        cout<<" "<<p[i];
        if(i!=p.size()-1){
            cout<<" x";
        }else cout<<'\n';
    }
}
int main()
{
    long long n;
    while(cin>>n){
        primeFact(n);
    }
}
