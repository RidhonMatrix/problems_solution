#include<bits/stdc++.h>
using namespace std;
int getValue(char ch){
    if(ch=='B' || ch=='F' || ch=='P' || ch=='V') return 1;
    else if(ch=='C' || ch=='G' || ch=='J' || ch=='K' ||
            ch=='Q' || ch=='S' || ch=='X' || ch=='Z') return 2;
    else if(ch=='D' || ch=='T') return 3;
    else if(ch=='L') return 4;
    else if(ch=='M' || ch=='N') return 5;
    else if(ch=='R') return 6;
}
bool zeroRepresents(char ch){
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' ||
       ch=='U' || ch=='H' || ch=='W' || ch=='Y') return true;
    return false;
}
bool isChar(char ch){
    if(ch>='A' && ch<='Z') return false;
    return true;
}
void soundex(std::string &str){
    for(int i=0;i<str.size();i++){
        if(zeroRepresents(str[i]) || isChar(str[i])) continue;
        while(getValue(str[i])==getValue(str[i+1]) && i+1<str.size()) i++;
        if(zeroRepresents(str[i]) || isChar(str[i])) continue;
        cout<<getValue(str[i]);
    }
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string str;
    while(cin>>str){
        soundex(str);
        cout<<endl;
    }
    return 0;
}
