#include<bits/stdc++.h>
using namespace std;
int main()
{
      //freopen("in.txt","r",stdin);
//    string str;
//    while(getline(cin,str)){
//        for(int i=0;i<str.size();i++){
//            if(str[i]==){
//
//            }
//        }
//        cout<<str<<endl;
//    }
    long long n;
    vector<double>v;
    while(cin>>n){
        v.push_back(sqrt(n));
    }
    for(int i=(v.size()-1);i>=0;i--){
        printf("%.4lf\n",v[i]);
    }



}
