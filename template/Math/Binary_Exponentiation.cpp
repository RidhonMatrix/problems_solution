#include<bits/stdc++.h>
using namespace std;

#define ll   long long

ll power(ll a,ll n){
    ll res=1;
    
    while(n){
        if(n%2){
            res*=a;
            n--;
        }
        else{
            a*=a;
            n/=2;
        }
    }
    return res;
}


int main()
{
    int b,p;
    cin>>b>>p;
    cout<<power(b,p)<<endl;
}


//    res        base         power
//      1           2           13
//      2           2           12
//      2           4            6
//      2          16            3
//     32          16            2
//     32          16            1
//   8192         256            0
    
  
