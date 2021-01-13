#include<bits/stdc++.h>
using namespace std;
map<string,int> mymap;
void preCalc(){
    int c=1;
    for(int i=97;i<=122;i++){
        string temp;
        temp.push_back(i);
        mymap[temp]=c++;
    }
    for(int i=97;i<=122;i++){
        for(int j=i+1;j<=122;j++){
            string temp;
            temp.push_back(i);
            temp.push_back(j);
            mymap[temp]=c++;
        }
    }
    for(int i=97;i<=122;i++){
        for(int j=i+1;j<=122;j++){
            for(int k=j+1;k<=122;k++){
                string temp;
                temp.push_back(i);
                temp.push_back(j);
                temp.push_back(k);
                mymap[temp]=c++;
            }
        }
    }
    for(int i=97;i<=122;i++){
        for(int j=i+1;j<=122;j++){
            for(int k=j+1;k<=122;k++){
                for(int l=k+1;l<=122;l++){
                    string temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    temp.push_back(k);
                    temp.push_back(l);
                    mymap[temp]=c++;
                }
            }
        }
    }
    for(int i=97;i<=122;i++){
        for(int j=i+1;j<=122;j++){
            for(int k=j+1;k<=122;k++){
                for(int l=k+1;l<=122;l++){
                    for(int m=l+1;m<=122;m++){
                        string temp;
                        temp.push_back(i);
                        temp.push_back(j);
                        temp.push_back(k);
                        temp.push_back(l);
                        temp.push_back(m);
                        mymap[temp]=c++;
                    }
                }
            }
        }
    }
}
int main()
{
    // freopen("in.txt","r",stdin);
    preCalc();
    string s;
    while(cin>>s){
        cout<<mymap[s]<<endl;
    }
    return 0;
}
