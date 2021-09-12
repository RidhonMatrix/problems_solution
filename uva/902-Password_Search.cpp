#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    string str;
    while(cin>>n>>str){
        int size=str.size()-(n-1);
        map<string,int>mymap;
        vector<string>v;
        for(int i=0,j=0;i<size;i++,j++){
            string subStr=str.substr(i, n);
            mymap[subStr]++;
            v.push_back(subStr);
        }

        int max=-1;
        string ans;
        for(int i=0;i<v.size();i++){
            if(mymap[v[i]]>max){
                max=mymap[v[i]];
                ans=v[i];
            }
        }
        cout<<ans<<endl;
    }



}
