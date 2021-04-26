#include<bits/stdc++.h>
using namespace std;
int convertToNum(char ch){
    if(ch>='A' && ch<='Z') return ch-65;
    if(ch>='a' && ch<='z') return ch-71;
    return 54;  //store other character to 54 index which we don't need
}
bool isUpperCase(char ch){
    if(ch>='A' && ch<='Z') return true;
    return false;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string s;
    int a[54];
    while(getline(cin,s)){
        memset(a,0,sizeof(a));
        for(int i=0;i<s.size();i++){
            a[convertToNum(s[i])]++;
        }
        int max=0;
        for(int i=0;i<52;i++){
            if(a[i]>max) max=a[i];
        }

        int i=0;
        for(;i<26;i++){
            if(max==a[i]) printf("%c",i+65);
        }
        for(;i<52;i++){
            if(max==a[i]) printf("%c",i+71);
        }

        cout<<" "<<max<<endl;
    }

}
