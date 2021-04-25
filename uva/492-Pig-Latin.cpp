#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
       ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
    return false;
}
bool isChar(char ch){
    if( (ch>='A' && ch<='Z') || (ch>='a' && ch<='z') ) return true;
    return false;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string str;
    while(getline(cin,str)){
        bool readChar=false;
        bool store=false;
        char lastChar;
        for(int i=0;i<=str.size();i++){
            if(i==str.size() && readChar==true){
                if(store==true){
                    cout<<lastChar;
                }
                cout<<"ay";
                continue;
            }
            if(i>=str.size()) break;
            if(isChar(str[i]) && store==false && readChar==false){
                readChar=true;
                if(!isVowel(str[i])){
                    lastChar=str[i];
                    store=true;
                    continue;
                }
            }
            if( ( (!isChar(str[i])) && readChar==true )){
                if(store==true){
                    cout<<lastChar;
                    store=false;
                }
                cout<<"ay";
                readChar=false;
            }
            cout<<str[i];
        }
        cout<<endl;
    }
}
