#include <iostream>
#include <algorithm>
using namespace std;
int min_ab(string a,int n)
{
    int min=99999;
    for(int i=0;i<n-1;i++){
        int l=abs(a[i]-a[i+1]);
        if(min>l){
            min=l;
        }
    }
    return min;
}
int main()
{
    string str,str2,rev_str;
    while(getline(cin,str))
    {
        str2=str;
        int n=str.size();
        int max=-1;
        int len=min_ab(str,n);
        if(len>max){
            max=len;
            rev_str=str;
        }
        for(int i=0;i<10;i++){
            if(prev_permutation(str.begin(),str.end())){
            len=min_ab(str,n);
            if(max<len){
                rev_str=str;
                max=len;
            }
            if(max==len){
                rev_str=min(str,rev_str);
             }
            }
        }
        for(int j=0;j<10;j++){
            if(next_permutation(str2.begin(),str2.end())){
            len=min_ab(str2,n);
            if(max<len){
                rev_str=str2;
                max=len;
            }
            }
        }
        cout<<rev_str<<max<<endl;
    }

}
