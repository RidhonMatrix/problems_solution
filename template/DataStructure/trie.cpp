#include<bits/stdc++.h>
using namespace std;
#define max 27
struct node{
    bool endmark;
    node* next[max];
    node(){
        endmark=false;
        for(int i=0;i<max;i++)
            next[i]=NULL;
    }
}*root;

void insert(string str){
    node* cur=root;
    int len=str.size();
    for(int i=0;i<len;i++){
        int id=str[i]-'a';
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
        cur=cur->next[id];
    }
    cur->endmark=true;
}

bool search(string str){
    node* cur=root;
    int len=str.size();
    for(int i=0;i<len;i++){
        int id=str[i]-'a';
        if(cur->next[id]==NULL)
            return false;
        cur=cur->next[id];
    }
    return cur->endmark;
}
void del(node* cur){
    for(int i=0;i<max;i++){
        if(cur->next[i])
            del(cur->next[i]);   
    }
    delete(cur);
}

int main()
{
    root=new node();
    printf("Number of Words: ");
    int n;cin>>n;
    string str;
    while(n--){
        cin>>str;
        insert(str);
    }
    printf("Number of Querys: ");
    int q;cin>>q;
    while(q--){
        cin>>str;
        if(search(str)){
            cout<<"Word Found!"<<'\n';
        }
        else cout<<"Word Not Found!"<<'\n';
    }

    del(root);
}
