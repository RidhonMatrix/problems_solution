#include<bits/stdc++.h>
using namespace std;
void decode(std::string &str){
    for(int i=0;i<str.size();i++){
        printf("%c",str[i]-7);
    }
    cout<<endl;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    string str;
    while(cin>>str){
        decode(str);
    }

}
