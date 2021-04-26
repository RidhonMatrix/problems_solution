#include<bits/stdc++.h>
using namespace std;
void printAsciReverse(char ch){
    int num=ch;
    while(num){
        cout<<num%10;
        num/=10;
    }
}
void decode(std::string &s){
    for(int i=s.size()-1;i>=0;i--){
        printAsciReverse(s[i]);
    }
}
int convertToNum(char ch){
    return ch-48;
}
void encode(std::string &s){
    for(int i=s.size()-1;i>=0; ){
        int number=0;
        if(s[i]=='1'){
            number=(number*10)+convertToNum(s[i]);
            number=(number*10)+convertToNum(s[i-1]);
            number=(number*10)+convertToNum(s[i-2]);
            i-=3;
            printf("%c",number);
        }
        else{
            number=(number*10)+convertToNum(s[i]);
            number=(number*10)+convertToNum(s[i-1]);
            i-=2;
            printf("%c",number);
        }
    }
}
bool isNumber(char ch){
    if(ch>='0' && ch<='9') return true;
    return false;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string s;
    while(getline(cin,s)){
        if(isNumber(s[0])){
            encode(s);
        }
        else{
            decode(s);
        }
        cout<<endl;
    }
}
